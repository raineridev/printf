/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:22:03 by mraineri          #+#    #+#             */
/*   Updated: 2024/09/03 15:39:34 by mraineri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_hex_p(unsigned long long decimal, int *counter)
{
    char *hex;

    hex = "0123456789abcdef";
    if (decimal >= 16)
        ft_hex_p(decimal / 16, counter);
    write(1, &hex[decimal % 16], 1);
    if (counter)
        (*counter)++;
}

// int main(void) {
//     char *test = "TESTE";  // Ponteiro para uma string

//     unsigned long address = (unsigned long)test;

//     unsigned long high_bits = address >> 48;
    
//     unsigned long address_of_string = (unsigned long)test;  // Endereço da string "TESTE"
//     unsigned long address_of_pointer = (unsigned long)&test;  // Endereço do ponteiro test

//     printf("Endereco da string (test): 0x%lx\n", address_of_string);
//     printf("Endereco do ponteiro (&test): 0x%lx\n", address_of_pointer);
//     printf("Endereco completo: 0x%lx\n", address);
    
//     printf("\n\n%d ,%p\n", &test, &test);
    
//     return 0;
// }