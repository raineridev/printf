/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:23:36 by mraineri          #+#    #+#             */
/*   Updated: 2024/09/03 15:38:26 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void ft_pointer(void *addr, int *counter)
{
    if(!addr)
    {
        ft_str_increment("(nil)", counter);
        return ;
    }
    write(1, "0x", 2);
        
    if (counter)
        *counter += 2; 
    ft_hex_p((unsigned long long)addr, counter);
}