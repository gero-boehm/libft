/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:24:44 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/14 09:36:11 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static char	*empty(void)
{
	char	*empty;

	empty = malloc(1);
	if (empty == 0)
		return (0);
	*empty = 0;
	return (empty);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (s1 == 0)
		return (0);
	if (set == 0)
		return ((char *) s1);
	start = 0;
	while (s1[start])
	{
		if (!is_in_set(s1[start], set))
			break ;
		start++;
	}
	end = ft_strlen(s1) - 1;
	while (s1[end])
	{
		if (!is_in_set(s1[end], set))
			break ;
		end--;
	}
	if (end - start + 1 < 1)
		return (empty());
	return (ft_substr(s1, start, end - start + 1));
}
