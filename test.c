/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:49:39 by mraineri          #+#    #+#             */
/*   Updated: 2024/09/03 12:41:26 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TEST

#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
    ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
    printf("\n");
    printf(" %p %p ", LONG_MIN, LONG_MAX);
    return (0);
}