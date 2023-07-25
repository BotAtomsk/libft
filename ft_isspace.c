/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:14:38 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/25 13:28:42 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isspace(int c) {
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return 1;
	else
		return 0;
}