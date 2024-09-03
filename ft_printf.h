/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:24:35 by mraineri          #+#    #+#             */
/*   Updated: 2024/09/03 13:25:28 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdarg.h>

// Void
void    ft_int_to_hex_lowercase(unsigned int decimal, int *counter);
void    ft_int_to_hex(unsigned int decimal, int *counter);
void    ft_putchar_increment(char c, int *counter);
void	ft_putnbr_fd_increment(int n, int fd, int *c);
void	ft_putunnbr_fd_increment(unsigned int n, int fd, int *c);
void    ft_str_increment(char *s, int *counter);
void	ft_putchar_fd(char c, int fd);
void    ft_pointer(void *addr, int *counter);
// Size_t
size_t	ft_strlen(const char *str);
// Other function prototypes
int     ft_printf(const char *format, ...);
#endif
