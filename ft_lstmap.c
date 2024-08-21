
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*somelst;
	t_list	*new;

	somelst = (void *)0;
	while (lst)
	{
		new = ft_lstnew(f(lst -> content));
		if (!new)
		{
			ft_lstclear(&somelst, del);
			return (somelst);
		}
		ft_lstadd_back(&somelst, new);
		lst = lst -> next;
	}
	return (somelst);
}
