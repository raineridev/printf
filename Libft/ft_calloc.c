/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:54:44 by mraineri          #+#    #+#             */
/*   Updated: 2024/06/03 15:18:03 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (nmemb != 0 && size != 0 && (nmemb * size) / size != nmemb)
		return (NULL);
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, nmemb * size);
	return (mem);
}
//int	main(void)
//{
//	char *p1 = ft_calloc(INT_MAX, INT_MAX);
//	char *p2 = ft_calloc(-5, -5);
//	char *b1 = calloc(INT_MAX, INT_MAX);
//	char *b2 = calloc(-5, -5);
//	printf("%s\n", p1);
//	printf("%s\n", p2);
//	printf("%s\n", b1);
//	printf("%s\n", b2);
//}