/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:49:40 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/04 12:49:41 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len) {
	char *destino;
	const char *origen;
	size_t i;

	destino = dst;
	origen = src;
	i = len;
	destino = dst;
	origen = src;
	if (dst < src) {
		while (len--)
			*destino++ = *origen++;
	} else if (dst > src) {
		while (i-- > 0)
			destino[i] = origen[i];
	}
	return dst;
}
