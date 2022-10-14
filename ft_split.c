/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:43:00 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/14 12:52:50 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	get_count(char const *s, char c)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (is_word)
				is_word = 0;
		}
		else
		{
			if (!is_word)
			{
				count++;
				is_word = 1;
			}
		}
		s++;
	}
	return (count);
}

static char const	*trim(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

static char	**free_all(char **array)
{
	while (*array)
	{
		free(*array);
		array++;
	}
	free(array);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	char const	*start;
	char		*word;
	char		**array;

	if (s == 0)
		return (0);
	array = ft_calloc(get_count(s, c) + 1, sizeof(char *));
	if (array == 0)
		return (0);
	i = 0;
	while (*s)
	{
		s = trim(s, c);
		if (!*s)
			break ;
		start = s;
		while (*s && *s != c)
			s++;
		word = ft_substr(start, 0, s - start);
		if (word == 0)
			return (free_all(array));
		array[i++] = word;
	}
	return (array);
}
