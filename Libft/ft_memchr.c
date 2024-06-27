/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:37:05 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/31 16:19:21 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)&ptr[i]); 
		i++;
	}
	return (NULL);
}

//int main (void) {
//   char ch = 'z';
//   char *ret = "T42 Lisboa Sap z po";

//   ret = ft_memchr(ret, ch, 20);

//   printf("String after |%c| is - |%s|\n", ch, ret);

//   return(0);
//}