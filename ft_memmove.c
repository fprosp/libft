/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:29:44 by fprosper          #+#    #+#             */
/*   Updated: 2022/03/21 14:47:59 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    size_t i;   
    
    i=0;
    while(i<n)
    {
        *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
        *(unsigned char *)(src + i) = '\0';

        i++;
    }
    return(dst);
}