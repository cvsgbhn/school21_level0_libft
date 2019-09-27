#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && del)
	{
		ft_lstdel((*alst)->next, (*alst)->content);
		ft_lstdelone((*alst)->content, (*alst)->content_size);
	}
}
