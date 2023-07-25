/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:51:14 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/25 13:19:17 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) {
	size_t len;
	size_t n;

	len = ft_strlen(src);
	if (dstsize > 0) {
		if (len < dstsize - 1)
			n = len;
		else
			n = dstsize - 1;
		ft_memcpy(dst, src, n); 
		*dst = '\0'; 
	}
	return len;
}