/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:00:34 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/22 18:21:48 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!dst || !src)
		return (0);
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] && i < (size - 1) && i <= len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

//int	main(void)
//{
//	char dst[10]; memset(dst, 'A', 10);
//	char src[] = "coucou";
//	printf("Return: %zu\n",ft_strlcpy(dst, src, 5)); // Conta \0
//	printf("%s\n", dst);
//}
