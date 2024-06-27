/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:24:15 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/22 19:32:06 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle)
		return (NULL);
	if (!needle[i])
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
		{
			j++;
			if (!needle[j])
				return (&((char *)haystack)[i]);
		}
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	char *str = "lorem ipsum dolor sit amet";
//	char *needle = "";
//	printf("1#'%s'\n", ft_strnstr(str, needle, 10));
//	//printf("2#'%s'\n", strstr(str, needle));
//}
