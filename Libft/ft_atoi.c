/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:51:19 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/21 16:20:51 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	signal;

	i = 0;
	num = 0;
	if (!nptr || !*nptr)
		return (0);
	while ((nptr[i] == 32) || (nptr[i] >= 1 && nptr[i] <= 15))
		i++;
	signal = (nptr[i] != '-') - (nptr[i] == '-');
	i += (nptr[i] == '-' || nptr[i] == '+');
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * signal);
}
//int	main(void)
//{
//	//char *stringForTest = "    -2232323dsfsdf34343";
//	char *stringForTest = NULL;
//	ft_atoi(stringForTest);
//	printf("\n \033[1;101m[Original String]\033[49;39;0m  
//-> \033[1;104m%s\033[49;39;0m\n\n", stringForTest);
//    printf("\n \033[1;101m[Result ft_atoi]\033[49;39;0m
//  -> \033[1;104m%d\033[49;39;0m\n\n", ft_atoi(stringForTest));
//    //printf("\n \033[1;101m[Result atoi]\033[49;39;0m
//  -> \033[1;104m%d\033[49;39;0m\n\n", atoi(stringForTest));
//	return (0);
//}