/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frengo <frengo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:07:45 by fprosper          #+#    #+#             */
/*   Updated: 2022/03/23 16:42:09 by frengo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    int i;
    
    i=0;
    if (i < ((int)dstsize - 1))
    { 
        while(*(src + i) != '\0')
        {
            *(dst + i) = *(src + i);
            i++;
        }
    }
    *(dst + i + 1) = '\0';
    return ((size_t)ft_strlen(src));
}