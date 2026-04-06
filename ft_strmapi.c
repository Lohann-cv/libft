#include "libft.h"

char  *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  unsigned int  i;
  size_t  s_len;
  char  *arr;

  if (!s || !f)
    return (NULL);
  s_len = ft_strlen(s);
  arr = malloc(sizeof(char) * (s_len + 1));
  if (!arr)
    return (NULL);
  i = 0;
  while (s[i])
  {
    arr[i] = f(i, s[i]);
    i++;
  }
  arr[i] = '\0';
  return (arr);
}
