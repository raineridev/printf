/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:35:45 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/22 13:40:46 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new && !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

//int	main(void)
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
//	ft_lstadd_front(&begin, elem4);
//	ft_lstadd_front(&begin, elem3);
//	ft_lstadd_front(&begin, elem2);
//	ft_lstadd_front(&begin, elem);
//	return (0);
//}