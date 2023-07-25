/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:21:34 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/25 13:28:34 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
	const unsigned char *p1 = (const unsigned char *)s1;
	const unsigned char *p2 = (const unsigned char *)s2; 
	
	while (n--) {
		if (*p1 != *p2 || *p1 == '\0' || *p2 == '\0')
			return (*p1 - *p2);
		p1++;
		p2++;
	}    
	return 0;
}