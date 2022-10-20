/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:42:37 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/20 14:40:17 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *) haystack);
	while (*haystack && len > 0)
	{
		i = 0;
		while ((needle[i] == haystack[i] && i < len) || !needle[i])
		{
			if (!needle[i])
				return ((char *) haystack);
			i++;
		}
		len--;
		haystack++;
	}
	return (NULL);
}
