/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_increment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:19:59 by mraineri          #+#    #+#             */
/*   Updated: 2024/06/27 15:59:27 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_str_increment(char *s, int *counter) 
{
    if(!s|| !counter)
        return ;
    write(1, s, ft_strlen(s));
    *counter += ft_strlen(s);
}