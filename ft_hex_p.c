/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:22:03 by mraineri          #+#    #+#             */
/*   Updated: 2024/09/03 15:39:34 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_p(unsigned long long decimal, int *counter)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (decimal >= 16)
		ft_hex_p(decimal / 16, counter);
	write(1, &hex[decimal % 16], 1);
	if (counter)
		(*counter)++;
}
