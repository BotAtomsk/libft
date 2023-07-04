/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:19:07 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/04 16:28:23 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
    unsigned char *p;

    p = (unsigned char *) s;
    while (n--) {
        if (*p == (unsigned char) c)
            return ((void *) p);
        p++;
    }
    return 0;
}