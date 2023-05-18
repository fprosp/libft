/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:37:30 by fprosper          #+#    #+#             */
/*   Updated: 2023/05/18 16:01:59 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack && !len)
		return (0);
	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < ft_strlen(haystack) && i < len)
	{
		j = 0;
		while (*(needle + j) == *(haystack + i + j) && i + j < len)
		{
			if (j + 1 == ft_strlen(needle))
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
