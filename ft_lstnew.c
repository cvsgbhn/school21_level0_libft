#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
  t_list *newlist;

  if (!content)
  {
    newlist->content = NULL;
    newlist->content_size = 0;
  }
  else
  {
    if (!(newlist = (t_list*)malloc(sizeoof(t_list))))
    {
      free(newlist);
      return (NULL);
    }
    newlist->content = content;
    newlist->content_size = content_size;
  }
  newlist->next = NULL;
  return (newlist);
}