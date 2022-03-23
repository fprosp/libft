/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:02:57 by fprosper          #+#    #+#             */
/*   Updated: 2022/03/21 14:48:15 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;   

    i=0;
    while(i<n)
    {
        *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
        i++;
    }
    return(dst);
}