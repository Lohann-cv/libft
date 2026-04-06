#include "libft.h"

static int ft_is_set(char const c, char const *set)
{
  size_t  i;

  i = 0;
  while (set[i])
  {
    if (set[i] == c)
      return (0);
    i++;
  }
  return (1);
}

static size_t  ft_trimedlen(char const *s1, char const *set)
{
  size_t  i;
  size_t  j;

  i = 0;
  j = 0;
  while (s1[i])
  {
    if (!ft_is_set(s1[i], set))
      i++;
    else
    {
      i++;
      j++;
    }
  }
  return (j);
}

char  *ft_strtrim(char const *s1, char const *set)
{
  size_t  i;
  size_t  j;
  char  *ptr;

  if (!s1 || !set)
    return (NULL);
  ptr = malloc(sizeof(char) * (ft_trimedlen(s1, set) + 1));
  if (!ptr)
    return (NULL);
  i = 0;
  j = 0;
  while (s1[i])
  {
    if (!ft_is_set(s1[i], set))
      i++;
    else
    {
      ptr[j] = s1[i];
      i++;
      j++;
    }
  }
  ptr[j] = '\0';
  return (ptr);
}

/*#include <stdio.h>
int main(int argc, char *argv[])
{
  char const  *s1 = "Je suis globiboulga";
  char const  *set = "su";
  (void)argc;
  printf("%s\n", ft_strtrim((char const*)argv[1], (char const*)argv[2]));
  return (0);
}*/
