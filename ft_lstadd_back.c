
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tsl;

	tsl = *lst;
	if (!tsl)
	{
		*lst = new;
		return ;
	}
	tsl = ft_lstlast(tsl);
	tsl -> next = new;
}
