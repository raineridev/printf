/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:34:42 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/22 16:19:09 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	mem = (ft_calloc((ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1, 1));
	if (!mem)
		return (NULL);
	while (s1[i])
	{
		mem[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		mem[j] = s2[i];
		j++;
		i++;
	}
	return (mem);
}

//int	main(void)
//{
//	char *s1 = "lorem ipsum\t\n";
//	char *s2 = "\tdolor sit amet\n\n\n";
//	printf("%s",ft_strjoin(s1, s2));
//}
