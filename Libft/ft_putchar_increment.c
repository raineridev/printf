/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_increment.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:09:39 by mraineri          #+#    #+#             */
/*   Updated: 2024/06/27 15:35:32 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_increment(char c, int *counter) 
{
    if(!c || !counter)
        return ;
    write(1, &c, 1);
    (*counter)++;
}
