/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:17:12 by mraineri          #+#    #+#             */
/*   Updated: 2024/08/28 13:48:13 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void ft_find(va_list args, char format, int *counter)
{
    if(format == 's')
        ft_str_increment(va_arg(args, char *), counter);
    if(format == 'c')
        ft_putchar_increment(va_arg(args, int), counter);
    if(format == 'd' ||format == 'i')
        ft_putnbr_fd_increment(va_arg(args, int), 1, counter);
    if(format == 'u')
        ft_putunnbr_fd_increment(va_arg(args, int), 1, counter);
    if(format == '%')
        ft_putchar_increment('%', counter);
    if(format == 'x')
        ft_int_to_hex_lowercase(va_arg(args, int), counter);
    if(format == 'X')
        ft_int_to_hex(va_arg(args, int), counter);
    if (format == 'p') 
        ft_pointer(va_arg(args, void *), counter);
}

int ft_printf(const char *s, ...)
{
    int     count;
    va_list args;

    if(!s)
        return (-1);
    va_start(args, s);
    count = 0;
    while(*s != '\0')       
    {
        while(*s != '%' && *s != '\0')
        {
                ft_putchar_increment(*s, &count);
                s++;
        }
        if(*s == '%' && s++)
            ft_find(args, *s, &count);
        if(*s != '\0')
            s++;
    }
    va_end(args);
    return count;
}

// int main(void)
// {    
//     char *str = "Marcelo";
//     ft_printf("\n\033[1;101m[%%s]\033[49;39;0m  -> \033[1;104m (%s) \033[49;39;0m\n\n", "World");
//     ft_printf("\033[1;101m[%%s]\033[49;39;0m  -> \033[1;104m (%s) \033[49;39;0m\n\n", str);
//     ft_printf("\033[1;101m[%%c]\033[49;39;0m  -> \033[1;104m (%c) \033[49;39;0m\n\n", 'M');
//     ft_printf("\033[1;101m[%%d]\033[49;39;0m  -> \033[1;104m (%d) \033[49;39;0m\n\n", 96);
//     ft_printf("\033[1;101m[%%i]\033[49;39;0m  -> \033[1;104m (%i) \033[49;39;0m\n\n", 69);
//     ft_printf("\033[1;101m[%%u]\033[49;39;0m  -> \033[1;104m (%u) \033[49;39;0m\n\n", -3343);
//     printf("\033[1;101m(Printf Original)[%%u]\033[49;39;0m  -> \033[1;104m (%u) \033[49;39;0m\n\n", -3343);
// }
