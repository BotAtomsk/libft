/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:52:16 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/04 13:52:18 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c) {
    if (c >= 65 && c <= 90){
        c = c + 32;
        return c;
    } else
        return c;
}