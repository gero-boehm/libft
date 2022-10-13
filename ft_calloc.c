/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:08:39 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/12 09:33:35 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	total;
	char	*mem;

	total = count * size;
	mem = malloc(total);
	if (mem == 0)
		return (0);
	i = 0;
	while (i < total)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *) mem);
}
