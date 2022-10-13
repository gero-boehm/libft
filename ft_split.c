/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:43:00 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/13 20:09:13 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	get_count(char const *s, char c)
{
	int			count;
	char const	*cursor;

	count = 1;
	while (cursor)
	{
		cursor = ft_strchr(cursor, c);
		if (cursor)
		{
			cursor++;
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			count;
	char const	*cursor;
	char const	*last;

	if (s == 0)
		return (0);
	count = get_count(s, c);
	array = malloc(count * sizeof(char *));
	if (array == 0)
		return (0);
	last = s;
	i = 0;
	while (i < count)
	{
		cursor = ft_strchr(cursor, c);
		array[i] = ft_substr(last, 0, cursor - last);
		last = cursor;
		cursor++;
		i++;
	}
	return (array);
}
