#include "libft.h"

void  ft_lstclear(t_list **lst, void (*del)(void*))
{
  t_list  *element;

  if (!lst || !del)
    return ;
  element = *lst;
  while (element)
  {
    ft_lstdelone(element, del);
    element = element->next;
  }
  *lst = NULL;
  return ;
}
