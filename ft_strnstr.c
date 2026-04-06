#include "libft.h"

char  *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
  size_t  i;
  size_t  j;

  i = 0;
  j = 0;
  if (needle[0] == '\0')
    return ((char*)haystack);
  while (haystack[i] && i < n)
  {
    while (i + j < n && haystack[i + j] && haystack[i + j] == needle[j])
    {
      j++;
      if (needle[j] == '\0')
        return ((char*)&haystack[i]);
    }
    j = 0;
    i++;
  }
  return (NULL);
}
