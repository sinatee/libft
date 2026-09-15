/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomato-soup <tomato-soup@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 10:17:40 by tomato-soup       #+#    #+#             */
/*   Updated: 2026/09/15 10:41:17 by tomato-soup      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t  size;
    size = ft_strlen(s);

    while (1)
    {
        if (s[size] == (char)c)
            return ((char *) &s[size]);
        if (size == 0)
            break;
        size--;
    }

    return (NULL);
}