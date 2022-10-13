/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:28:57 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/12 09:34:43 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	length;

	length = 0;
	while (src[length])
		length++;
	if (dstsize == 0)
		return (length);
	i = 0;
	while (*src && i < (dstsize - 1))
	{
		*dst++ = *src++;
		i++;
	}
	*dst = 0;
	return (length);
}
