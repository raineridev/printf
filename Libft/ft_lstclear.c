/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:50:22 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/31 15:57:55 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void del(void *content)
//{
//    free(content);
//}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*next_node;

	if (!lst || !*lst || !del)
		return ;
	node = *lst;
	next_node = node->next;
	while (next_node)
	{
		next_node = node->next;
		(*del)(node->content);
		free(node);
		node = next_node;
	}
	*lst = NULL;
}

//int	main(void)
//{
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
//	elem->next = elem2;
//	elem2->next = elem3;
//	elem3->next = elem4;

//	ft_lstclear(&elem3, &del);
//	printf("Node 1: %s\nNode 2: %s\n\n", (char *)elem->content,
//  (char *)elem2->content);
//}
