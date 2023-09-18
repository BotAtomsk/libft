/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:51:28 by rgacho            #+#    #+#             */
/*   Updated: 2023/09/18 17:08:46 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define CYN   "\x1B[36m"
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define RESET "\x1B[0m"

// para linkearlo a la libft después del 'make': gcc main.c -o main -L. -lft
// para ejecutarlo simplemente ./main

int main (void) {
    printf(CYN "\nTester básico para libft de Román\n\n"   RESET);
    
    // funciones is_whatever
    char alpha = 'a';
    char digit = '5';
    char x = '&';
    char noascii = (char) 210;
    char noprint = (char) 127;
    if (ft_isalpha(alpha) == 1 & ft_isalpha(digit) == 0)
        printf("1 " GRN "ft_isalpha\n"   RESET);
    else
        printf("1 " RED "ft_isalpha\n"     RESET);
    if (ft_isdigit(digit) == 1 & ft_isdigit(alpha) == 0)
        printf("2 "GRN "ft_isdigit\n"   RESET);
    else
        printf("2 " RED "ft_isdigit\n"     RESET);
    if (ft_isalnum(digit) == 1 & ft_isalnum(alpha) == 1 & ft_isalnum(x) == 0)
        printf("3 " GRN "ft_isalnum\n"   RESET);
    else
        printf("3 " RED "ft_isalnum\n"     RESET);
    if (ft_isascii(alpha) == 1 & ft_isalnum(noascii) == 0)
        printf("4 " GRN "ft_isalnum\n"   RESET);
    else
        printf("4 " RED "ft_isalnum\n"     RESET);
    if (ft_isprint(digit) == 1 & ft_isprint(noprint) == 0)
        printf("5 " GRN "ft_isalnum\n"   RESET);
    else
        printf("5 " RED "ft_isalnum\n"     RESET);

    // ft_strlen
    char *len = "cinco";
    char *nolen = "";
    if (ft_strlen(len) == 5 & ft_strlen(nolen) == 0)
        printf("6 " GRN "ft_strlen\n"   RESET);
    else
        printf("6 " RED "ft_strlen\n"     RESET);

    // ft_memset
    char memset[] = "source";
    ft_memset(memset, 65, 3); 
    if (strcmp(memset, "AAArce") == 0)
        printf("7 " GRN "ft_memset\n"   RESET);
    else
        printf("7 " RED "ft_memset\n"   RESET);

    // ft_bzero
    unsigned char bzero[] = { 0x12, 0x34, 0x56 };
    ft_bzero(bzero, 2);
    if (bzero[0] == 0 & bzero[1] == 0 & bzero[2] == 0x56)
        printf("8 " GRN "ft_bzero\n"   RESET);
    else
        printf("8 " RED "ft_bzero\n"   RESET);

    // ft_memcpy
    char memcpy_src[] = "source";
    char memcpy_dst[] = "destination";
    char memcpy_zero[] = "";
    ft_memcpy(memcpy_dst, memcpy_src, 3);
    if (strcmp(memcpy_dst, "soutination") == 0)
        printf("9 " GRN "ft_memcpy\n"   RESET);
    else
        printf("9 " RED "ft_memcpy\n"   RESET);

    // ft_memmove
    
}