/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:37:51 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/13 17:08:00 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*a;
	const char	*b;

	if (s1 == 0 || s2 == 0)
		return (-1);
	a = s1;
	b = s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return (b[i] - a[i]);
		i++;
	}
	return (0);
}
