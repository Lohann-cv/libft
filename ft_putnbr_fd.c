#include "libft.h"

void  ft_putnbr_fd(int n, int fd)
{
  char  c;
  long  nb;

  nb = n;
  if (nb < 0)
  {
    write(fd, "-", 1);
    nb = -nb;
  }
  if (nb > 9)
    ft_putnbr_fd(nb / 10, fd);
  c = nb % 10 + '0';
  write(fd, &c, 1);
  return ;
}
