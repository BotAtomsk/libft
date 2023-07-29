/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:18:21 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/29 16:45:03 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(int n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*minimum_number_case(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 12);
	if (!str)
		return (NULL);
	ft_strcpy(str, "-2147483648");
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		str_len;
	int		negative;

	if (n == -2147483648)
		return (minimum_number_case());
	negative = 0;
	if (n < 0)
	{
		negative = 1;
		n = -n;
	}
	str_len = num_len(n) + negative;
	str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return (NULL);
	str[str_len] = '\0';
	while (str_len--)
	{
		str[str_len] = n % 10 + '0';
		n = n / 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
