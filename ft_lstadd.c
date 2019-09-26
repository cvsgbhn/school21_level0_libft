#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *temporary;

	if (!alst)
		alst = &new;
	temporary = *alst;
	while (temporary -> next)
		temporary = temporary -> next;
	if (new)
	{
		temporary->next = new;
		new->next = NULL;
	}
}
