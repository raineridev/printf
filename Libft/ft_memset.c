/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:51:19 by mraineri          #+#    #+#             */
/*   Updated: 2024/06/05 16:01:52 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s || n < 1)
		return (s);
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
//int	main(void)
//{
//	char *s = strdup("AAAAAAAAAAAAAAAAAAA");
//	ft_memset(s, 35, 29);
//	printf("%s\n", s);
//	return (0);
//}
