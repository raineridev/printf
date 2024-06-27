/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:06:28 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/23 18:58:37 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	j = 0;
	dst_len = ft_strlen(dst);
	i = dst_len;
	if (!dst || !src)
		return (0);
	if (size == 0 || dst_len >= size)
		return (ft_strlen(src) + size);
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}

//int	main(void)
//{
//	char dest[30] = "Hello";
//	char *src = (char *)"World";

////	char *src = NULL;
//	printf("Strncat:%zu\n", ft_strlcat(dest, src, 7));
//	printf("Ft_Strnlcpy: %s\n", dest);
////	ft_strlcpy(dest, src, 2);
//}
