/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:12:59 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/25 13:19:05 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str) {
	int	n;
	int negative;

	n = 0;
	negative = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		n = *str++ - '0' + n * 10;
	if (negative == 1)
		return (-n);
	return (n);
}