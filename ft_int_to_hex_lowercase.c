/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_hex_lowercase.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:22:03 by mraineri          #+#    #+#             */
/*   Updated: 2024/09/09 13:25:28 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_int_to_hex_lowercase(unsigned int decimal, int *counter)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (decimal >= 16)
		ft_int_to_hex_lowercase(decimal / 16, counter);
	write(1, &hex[decimal % 16], 1);
	if (counter)
		(*counter)++
}