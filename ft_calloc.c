/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:08:39 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/13 13:58:33 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	char	*mem;

	total = count * size;
	if (count != 0 && total / count != size)
		return (0);
	mem = malloc(total);
	if (mem == 0)
		return (0);
	ft_bzero(mem, total);
	return ((void *) mem);
}
