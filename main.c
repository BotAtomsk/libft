/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:51:28 by rgacho            #+#    #+#             */
/*   Updated: 2023/09/18 18:21:49 by rgacho           ###   ########.fr       */
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
    if (ft_isalpha(alpha) == 1 && ft_isalpha(digit) == 0)
        printf("1\t" GRN "ft_isalpha\n"   RESET);
    else
        printf("1\t" RED "ft_isalpha\n"     RESET);
    if (ft_isdigit(digit) == 1 && ft_isdigit(alpha) == 0)
        printf("2\t" GRN "ft_isdigit\n"   RESET);
    else
        printf("2\t" RED "ft_isdigit\n"     RESET);
    if (ft_isalnum(digit) == 1 && ft_isalnum(alpha) == 1 & ft_isalnum(x) == 0)
        printf("3\t" GRN "ft_isalnum\n"   RESET);
    else
        printf("3\t" RED "ft_isalnum\n"     RESET);
    if (ft_isascii(alpha) == 1 && ft_isalnum(noascii) == 0)
        printf("4\t" GRN "ft_isalnum\n"   RESET);
    else
        printf("4\t" RED "ft_isalnum\n"     RESET);
    if (ft_isprint(digit) == 1 && ft_isprint(noprint) == 0)
        printf("5\t" GRN "ft_isalnum\n"   RESET);
    else
        printf("5\t" RED "ft_isalnum\n"     RESET);

    // ft_strlen
    char *len = "cinco";
    char *nolen = "";
    if (ft_strlen(len) == 5 && ft_strlen(nolen) == 0)
        printf("6\t" GRN "ft_strlen\n"   RESET);
    else
        printf("6\t" RED "ft_strlen\n"     RESET);

    // ft_memset
    char memset[] = "source";
    ft_memset(memset, 65, 3); 
    if (strcmp(memset, "AAArce") == 0)
        printf("7\t" GRN "ft_memset\n"   RESET);
    else
        printf("7\t" RED "ft_memset\n"   RESET);

    // ft_bzero
    unsigned char bzero[] = { 0x12, 0x34, 0x56 };
    ft_bzero(bzero, 2);
    if (bzero[0] == 0 & bzero[1] == 0 & bzero[2] == 0x56)
        printf("8\t" GRN "ft_bzero\n"   RESET);
    else
        printf("8\t" RED "ft_bzero\n"   RESET);

    // ft_memcpy
    char memcpy_src[] = "source";
    char memcpy_dst[] = "destination";
    char memcpy_zero[] = "";
    ft_memcpy(memcpy_dst, memcpy_src, 3);
    if (strcmp(memcpy_dst, "soutination") == 0)
        printf("9\t" GRN "ft_memcpy\n"   RESET);
    else
        printf("9\t" RED "ft_memcpy\n"   RESET);

    // ft_memmove
    char memmove[] = "source";
    ft_memmove(&memmove[4], &memmove[1], 2);
    if (strcmp(memmove, "sourou") == 0)
        printf("10\t" GRN "ft_memmove\n"   RESET);
    else
        printf("10\t" RED "ft_memmove\n"   RESET);

    // ft_strlcpy
    char strlcpy_src[] = "source";
    char strlcpy_dst[] = "destination";
    if (ft_strlcpy(strlcpy_dst, strlcpy_src, 5) == 6 && strcmp(strlcpy_dst, "sour") == 0)
        printf("11\t" GRN "ft_strlcpy\n"   RESET);
    else
        printf("11\t" RED "ft_strlcpy\n"   RESET);

    // ft_strlcat
    char strlcat_src[] = "World!";
    char strlcat_dst[10] = "Hello ";
    if (ft_strlcat(strlcat_dst, strlcat_src, 10) == 12 && strcmp(strlcat_dst, "Hello Wor") == 0)
        printf("12\t" GRN "ft_strlcat\n"   RESET);
    else
        printf("12\t" RED "ft_strlcat\n"   RESET);
    
    // ft_toupper y ft_tolower
    char upperlower = 'j';
    char noupperlower = '0';
    if (ft_toupper(upperlower) == 'J' && ft_toupper(noupperlower) == '0' 
    && ft_tolower(upperlower) == 'j' && ft_tolower(noupperlower) == '0')
    {
        printf("13\t" GRN "ft_toupper\n"   RESET);
        printf("14\t" GRN "ft_tolowe\n"   RESET);
    }
    else
    {
        printf("13\t" RED "ft_toupper\n"   RESET);
        printf("14\t" GRN "ft_tolower\n"   RESET);
    }
    
    // ft_strchr
    const char *str = "apple";
    char target = 'p';
    char *result = ft_strchr(str, target);
    if (result != NULL && *result == target)
        printf("15\t" GRN "ft_strchr\n"   RESET);
    else
        printf("15\t" RED "ft_strchr\n"   RESET);

    // ft_strrchr LO MISMO al revés
}