/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:51:43 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/25 14:22:25 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) {
	char *result;
	size_t start;
	size_t end;

	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	result = (char *)malloc((end - start + 1) * sizeof(char));
	if (result != NULL) {
		ft_memcpy(result, s1 + start, end - start);
		result[end - start] = '\0';
	}
	return result;
}