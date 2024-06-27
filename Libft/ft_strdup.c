/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:18:17 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/22 18:21:36 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		i;
	char		*np;

	np = ft_calloc(ft_strlen((char *)s) + 1, 1);
	if (!np)
		return (NULL);
	i = 0;
	while (s[i])
	{
		np[i] = s[i];
		i++;
	}
	return (np);
}

//int	main(){
//	printf("%s\n",ft_strdup("lorem ipsum dolor sit amet"));
//}
