/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:42:37 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/19 15:16:20 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	length;

	if (*needle == 0)
		return ((char *) haystack);
	length = ft_strlen(needle);
	if (length == 0)
		return ((char *) haystack);
	i = 0;
	while (*(haystack + i) && i < len)
	{
		if (length + i > len)
			return (0);
		if (!ft_strncmp(haystack + i, needle, length))
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
