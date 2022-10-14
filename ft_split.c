/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:43:00 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/14 11:30:58 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h>


static int	get_count(char const *s, char c)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 1;
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

static void	free_all(char **array)
{
	while (*array)
	{
		free(*array);
		array++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			length;
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
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		length = 0;
		start = s;
		while (*s && *s != c)
		{
			length++;
			s++;
		}
		word = ft_substr(start, 0, length);
		if (word == 0)
		{
			free_all(array);
			return (0);
		}
		array[i++] = word;
	}
	return (array);
}

// char	**ft_split(char const *s, char c)
// {
// 	int			i;
// 	int			count;
// 	char const	*cursor;
// 	char const	*last;
// 	char		**array;

// 	if (s == 0)
// 		return (0);
// 	last = ft_strtrim(s, make_set(c));
// 	count = get_count(s, c);
// 	printf("%d\n", count);
// 	array = malloc(count * sizeof(char *));
// 	if (array == 0)
// 		return (0);
// 	i = 0;
// 	cursor = last;
// 	while (i < count)
// 	{
// 		printf("%p %p %lu\n", last, cursor, cursor - last);
// 		cursor = ft_strchr(cursor, c);
// 		array[i] = ft_substr(last, 0, cursor - last);
// 		last = cursor;
// 		cursor++;
// 		i++;
// 	}
// 	return (array);
// }
