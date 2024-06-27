/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:46:14 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/21 15:11:52 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*node;

	i = 0;
	if (!lst)
		return (0);
	node = lst;
	while (node->next)
	{
		i++;
		node = node->next;
	}
	return (i + 1);
}
//int	main(void)
//{
//	t_list *node1 = ft_lstnew("Node 1");
//	t_list *node2 = ft_lstnew("Node 2");
//	t_list *node3 = ft_lstnew("Node 3");
//	node1->next = node2;
//	node2->next = node3;
//	printf("\n\n\n\033[1;104m Total Of Nodes: %d \n\n\n", ft_lstsize(node1));
//	return (0);
//}
