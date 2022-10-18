/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:42:37 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/18 16:45:44 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	length;

	// printf("yay\n");
	if (len == 0)
		return ((char *) haystack);
	// printf("yay\n");
	length = ft_strlen(needle);
	if (length == 0)
		return ((char *) haystack);
		// return (0);
	// printf("yay\n");
	i = 0;
	while (*(haystack + i) && i < len)
	{
		if (length + i > len)
			return (0);
		// printf("%s\n", haystack + i);
		// printf("%d\n", ft_strncmp(haystack + i, needle, length));
		if (!ft_strncmp(haystack + i, needle, length))
			return ((char *) haystack + i);
		i++;
	}
	return (0);
}
