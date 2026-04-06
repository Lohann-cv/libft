#include "libft.h"

char  *ft_strchr(const char *s, int c)
{
  int i;
  char  *s_ptr;

  i = 0;
  s_ptr = (char*)s;
  while (s_ptr[i])
  {
    if (s_ptr[i] == c)
      return (&s_ptr[i]);
    i++;
  }
  if ((char)c == '\0')
    return (&s_ptr[i]);
  return (NULL);
}
