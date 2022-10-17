/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:50:18 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/17 20:24:32 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

static char	*empty(void)
{
	char	*empty;

	empty = malloc(1);
	if (empty == 0)
		return (0);
	*empty = 0;
	return (empty);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length;
	int		difference;
	char	*sub;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	if (start > length)
		return (empty());
	difference = (int)(start + len) - (int) length;
	if (difference > 0)
		len -= difference;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	sub[len] = 0;
	while (len > 0)
	{
		sub[len - 1] = s[start + len - 1];
		len--;
	}
	return (sub);
}
