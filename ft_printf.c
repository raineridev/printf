/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:17:12 by mraineri          #+#    #+#             */
/*   Updated: 2024/09/09 13:19:09 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_find(va_list args, char format, int *counter)
{
	if (format == 's')
		ft_str_increment(va_arg(args, char *), counter);
	if (format == 'c')
		ft_putchar_increment(va_arg(args, int), counter);
	if (format == 'd' || format == 'i')
		ft_putnbr_fd_increment(va_arg(args, int), 1, counter);
	if (format == 'u')
		ft_putunnbr_fd_increment(va_arg(args, int), 1, counter);
	if (format == '%')
		ft_putchar_increment('%', counter);
	if (format == 'x')
		ft_int_to_hex_lowercase(va_arg(args, int), counter);
	if (format == 'X')
		ft_int_to_hex(va_arg(args, int), counter);
	if (format == 'p')
		ft_pointer(va_arg(args, void *), counter);
}

int	ft_printf(const char *s, ...)
{
	int			count;
	va_list		args;

	if (!s)
		return (-1);
	va_start(args, s);
	count = 0;
	while (*s != '\0')
	{
		while (*s != '%' && *s != '\0')
		{
			ft_putchar_increment(*s, &count);
			s++;
		}
		if (*s == '%' && s++)
			ft_find(args, *s, &count);
		if (*s != '\0')
			s++;
	}
	va_end(args);
	return (count);
}
