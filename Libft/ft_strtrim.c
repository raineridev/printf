/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:46:09 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/22 19:45:02 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		f;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (s1 && ft_strrchr(set, s1[i]))
		i++;
	f = i;
	i = ft_strlen(s1);
	while (ft_strrchr(set, s1[i - 1]))
		i--;
	s = ft_substr(s1, f, i - f);
	return (s);
}

//int	main(void)
//{
//	// =- | -=-=Marcelo
//	char *s1 = "lorem \n ipsum \t dolor \n sit \t amet";
//	printf("::%s$\n",ft_strtrim(s1, " "));
//}