/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:57:51 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/04 14:10:40 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrchr(const char *s, int c) {
    int len = ft_strlen(s);

    while (len >= 0) {
        if (s[len] == (char) c)
            return ((char *) &s[len]);
        len--;
    }
    return (NULL);
}