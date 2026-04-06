#include "libft.h"

void  *ft_calloc(size_t n, size_t size)
{
  void  *ptr;

  if (n != 0 && size > SIZE_MAX / n)
    return (NULL);
  ptr = malloc(n * size);
  if (!ptr)
    return (NULL);
  ft_bzero(ptr, n * size);
  return (ptr);
}
