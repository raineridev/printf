/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:25:33 by mraineri          #+#    #+#             */
/*   Updated: 2024/06/27 16:35:44 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunnbr_fd_increment(unsigned int n, int fd, int *c)
{
	(*c)++;
	if (n > 9)
		ft_putnbr_fd_increment(n / 10, fd, c);
	ft_putchar_fd((n % 10) + '0', fd);
}
