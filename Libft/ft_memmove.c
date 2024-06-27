/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:34:33 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/31 16:21:33 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!n)
		return (dest);
	if (!dest || !src)
		return (NULL);
	if (dest < src)
	{
		return (ft_memcpy(dest, src, n));
	}
	if (dest > src)
	{
		while (n--) 
		{
			((char *)dest)[n] = ((char *)src)[n]; 
		}
	}
	return (dest);
}

//int	main(void)
//{
//	char *dest = malloc(sizeof(char *));
//	char  src[] = "sd";
//	ft_memmove(dest, "48Lisboa", 5);
//	ft_memmove(NULL, "48Lisboa", 5);
//	ft_memmove(dest, NULL, 5);
//	printf("%s", dest);
//	return (0);
//}