/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:03:09 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/22 19:32:51 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	if (i != n)
		return (((unsigned char)s1[i] - (unsigned char)s2[i]));
	return (0);
}

// int main(void)
// {
//     char str1[] = "s"; 
//     char str2[] = "ã";
//     printf("Strncmp original: %d\n", strncmp(str1, str2, 5));
//     printf("My Ft_Strncmp: %d\n", ft_strncmp(str1, str2, 5));
// }
