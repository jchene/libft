/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:02:26 by jchene            #+#    #+#             */
/*   Updated: 2019/11/07 18:54:14 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char	*str);

char    *ft_strrchr(const char *s, int c)
{
    char    *str;
    int     i;
    int     len;

    str = (char *)s;
    len = ft_strlen(str);
    i = len;
    if (str == NULL)
        return (NULL);
    while (i >= 0)
    {
        if (str[i] == c)
            return (&str[i]);
        i--;
    }
    return (NULL);
}
