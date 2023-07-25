/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:29:25 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/25 13:44:34 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
	char *joinstr;
	size_t total_len;
	
	total_len = ft_strlen(s1) + ft_strlen(s2);
	joinstr = (char *)malloc((total_len + 1) * sizeof(char));
	if (joinstr != NULL) {
		ft_strlcpy(joinstr, s1, total_len + 1);
		ft_strlcat(joinstr, s2, total_len + 1);
	}
	return joinstr;
}