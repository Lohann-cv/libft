#include "libft.h"

char  *ft_strdup(const char *s)
{
  size_t  i;
  size_t  s_len;
  char  *s_dup;

  if (!s)
    return (NULL);
  i = 0;
  s_len = ft_strlen(s);
  s_dup = malloc(sizeof(char) * (s_len + 1));
  if (!s_dup)
    return (NULL);
  while (s[i])
  {
    s_dup[i] = s[i];
    i++;
  }
  s_dup[i] = '\0';
  return (s_dup);
}
