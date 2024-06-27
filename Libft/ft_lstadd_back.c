/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:14:45 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/21 14:09:26 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	node = *lst;
	while (node->next)
		node = node->next;
	node->next = new;
	new->next = NULL;
}
// int	main(void)
//{
//	t_list *lst;
//	t_list *node1 = ft_lstnew("Node 1");
//	t_list *node2 = ft_lstnew("Node 2");
//	t_list *node3 = ft_lstnew("Node 3");
//	lst = ft_lstnew("Final Node");
//	node1->next = node2;
//	node2->next = node3;
//	ft_lstadd_back(&node1, lst);
//	printf("%s", ((char *)node3->next->content));
//	return (0);
// }
// int	main(void)
//{
//	t_list		*begin;
//	t_list		*elem;
//	t_list		*elem2;
//	t_list		*elem3;
//	t_list		*elem4;
//	char		*str = strdup("lorem");
//	char		*str2 = strdup("ipsum");
//	char		*str3 = strdup("dolor");
//	char		*str4 = strdup("sit");
//	elem = ft_lstnew(str);
//	elem2 = ft_lstnew(str2);
//	elem3 = ft_lstnew(str3);
//	elem4 = ft_lstnew(str4);
//	begin = NULL;
//	ft_lstadd_back(&begin, elem);
//	ft_lstadd_back(&begin, elem2);
//	ft_lstadd_back(&begin, elem3);
//	ft_lstadd_back(&begin, elem4);
// }