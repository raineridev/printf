/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:57:26 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/21 14:38:18 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Itera a lista 'lst' e aplica a função
//'f' no conteúdo de cada nó.

#include "libft.h"

//void	ft_modify(void *elem)
//{
//	int			len;
//	char		*content;

//	len = 0;
//	content = (char *)elem;
//	while (content[len])
//	{
//		content[len++] = 'd';
//	}
//}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst->next)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
	(*f)(lst->content);
}

//int	main(void)
//{
//// Create Node's
//	t_list *node1 = ft_lstnew(strdup("Node 1"));
//	t_list *node2 = ft_lstnew(strdup("Node 2"));
//	t_list *node3 = ft_lstnew(strdup("Node 3"));
//	t_list *node4 = ft_lstnew(strdup("Node 4"));
//	t_list *node5 = ft_lstnew(strdup("Node 5"));
//	t_list *node6 = ft_lstnew(strdup("Node 6"));
//// Link Node's
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = node5;
//	node5->next = node6;
//// Make Action
//  printf("\n \033[1;101m[Before the function]\033[49;39;0m 
//-> \033[1;104m%s\033[49;39;0m", (char *)node1->content);
//	ft_lstiter(node1, &ft_modify);
//  printf("\n \033[1;101m[After the function]\033[49;39;0m 
// -> \033[1;104m%s\033[49;39;0m\n", (char *)node1->content);
//	return (0);
//}