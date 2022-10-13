/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:42:37 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/11 20:20:09 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	length;

	if (haystack == 0 || needle == 0)
		return ((char *) haystack);
	length = 0;
	while (needle[length])
		length++;
	if (length == 0)
		return ((char *) haystack);
	i = 0;
	while (i < len - length)
	{
		if (!ft_memcmp((void *) haystack + i, (void *) needle, length))
			return ((char *) haystack + i);
		i++;
	}
	return (0);
}
