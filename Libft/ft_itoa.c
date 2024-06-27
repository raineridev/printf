/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:01:49 by mraineri          #+#    #+#             */
/*   Updated: 2024/05/21 15:04:45 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	num;
	char	str[15];
	int		c;
	long	sig;

	if (!n)
		return (ft_strdup("0"));
	sig = n < 0;
	num = n * ((!sig) - sig);
	c = 14;
	str[c--] = '\0';
	while (num)
	{
		str[c--] = (num % 10) + '0';
		num = num / 10;
	}
	if (sig)
		str[c--] = '-';
	return (ft_strdup(&str[c + 1]));
}

//int	main(void)
//{
//	printf("N:(%s)\n",ft_itoa(INT_MIN));
//}
