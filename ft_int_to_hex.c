/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:22:03 by mraineri          #+#    #+#             */
/*   Updated: 2024/09/03 12:36:49 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_int_to_hex(unsigned int decimal, int *counter)
{   
    char *hex = "0123456789ABCDEF";

    if (decimal >= 16)
        ft_int_to_hex(decimal / 16, counter);
    write(1, &hex[decimal % 16], 1);
    if (counter)
        (*counter)++;  
}

// int main(void)
// {
//     int count = 0;  
//     ft_int_to_hex(605, &count); 
//     printf("\n\nNumber of characters printed: %d\n\n", count);
//     return 0;
// }