#include "libft.h"

char  *ft_strrchr(const char *s, int c)
{
  int i;
  char  *s_ptr;

  s_ptr = (char*)s;
  i = ft_strlen(s);
  while (0 <= i)
  {
    if (s_ptr[i] == (char)c)
      return (&s_ptr[i]);
    i--;
  }
  return (NULL);
}
