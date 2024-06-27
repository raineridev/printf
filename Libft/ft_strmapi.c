/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:56:23 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/22 16:32:10 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//char	mapi(unsigned int i, char c)
//{
//	static int indexArray[11] = {0};

//	if (i > 10 || indexArray[i] == 1)
//		write(1, "wrong index\n", 12);
//	else
//		indexArray[i] = 1;
//	if (c >= 'a' && c <= 'z')
//		return (c - 32);
//	else if (c >= 'A' && c <= 'Z')
//		return (c + 32);
//	else
//		return (c);
//}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = ft_calloc(ft_strlen(s) + 1, 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

//char test(unsigned int i, char c)
//{
//	(void) i;
//	return ft_toupper(c);
//}
//int main(void){
//	printf("%s\n",ft_strmapi("c sf cf vcbvf", test));
//}