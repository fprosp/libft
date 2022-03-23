/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frengo <frengo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:07:45 by fprosper          #+#    #+#             */
/*   Updated: 2022/03/23 19:05:17 by frengo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    int i;
    int ldst;
    int lsrc;   

    i = 0;
    ldst = ft_strlen(dst);
    lsrc = ft_strlen(src);
    while ((i < ((int)dstsize - ldst)) && (*(src + i) != '\0'))
    {
        *(dst + ldst + i) = *(src + i);
        i++;
    }
    *(dst + ft_strlen(dst)) = '\0';
    return ((size_t)(ldst + lsrc));
}