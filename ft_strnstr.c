/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:11:25 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/25 12:43:50 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return haystack;
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] != '\0' && i + j < len	&& haystack[i + j] == needle[j])
				j++;
			if (needle[j] == '\0')
				return &haystack[i];
		}
		i++;
	}
	return 0;
}