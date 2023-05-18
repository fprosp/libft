/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:07:45 by fprosper          #+#    #+#             */
/*   Updated: 2023/05/18 16:16:11 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ldst;

	if (!dstsize)
		return (ft_strlen((char *)src));
	ldst = ft_strlen(dst);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = 0;
	while (i + 1 < (dstsize - ldst) && *(src + i) != '\0')
	{
		*(dst + ldst + i) = *(src + i);
		i++;
	}
	*(dst + ldst + i) = '\0';
	return (ldst + ft_strlen(src));
}
