/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_increment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:19:59 by mraineri          #+#    #+#             */
/*   Updated: 2024/08/28 13:20:40 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_str_increment(char *s, int *counter) 
{
    if(!counter)
        return ;
    if(!s)
        s = "(null)";
    write(1, s, ft_strlen(s));
    *counter += ft_strlen(s);
}
