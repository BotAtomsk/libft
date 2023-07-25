/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:18:10 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/25 13:28:10 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t n) {
	while (n--) {
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
			return ( *(unsigned char *)s1 - *(unsigned char *)s2 ); 
		s1++;
		s2++;    
	}
	return (0);
}