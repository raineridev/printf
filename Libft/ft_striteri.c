/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:14:38 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/22 18:19:48 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//void ft_f(unsigned int i, char *s)
//{
//	//int b = i;
//	s[0] = '#';
//}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
//int	main(void)
//{
//	char s[] = "Mercedez";
//	ft_striteri(s, &ft_f);
//	printf("%s\n", s);
//	return (0);
//}