/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:19:03 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/21 14:58:40 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recebe como parâmetro um nó e libera a memória do conteúdo do
//o conteúdo do nó usando a função 'del' fornecida
//como parâmetro e libera o nó. A memória de
//'next' não deve ser liberada.

#include "libft.h"

//void del(void *content)
//{
//	free(content);
//}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}

//int	main(void)
//{
//	t_list *node1 = ft_lstnew(strdup("Node 1"));
//	t_list *node2 = ft_lstnew(strdup("Node 2"));
//	t_list *node3 = ft_lstnew("Node 3");
//	t_list *node4 = ft_lstnew("Node 4");
//	t_list *node5 = ft_lstnew("Node 5");
//	t_list *node6 = ft_lstnew("Node 6");
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = node5;
//	node5->next = node6;
//	//printf("Node1->Next::%p\nNode2::%p\n", &node1->next, node2);
//	//del_node(node1);
//	ft_lstdelone(node2, &del);
//	printf("Node::%s 
// -> Adress::%p\nNode::Node 2 -> Adress::%p\n",
// (char *)node1->content, node1->next, node2);
//}
