/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:08:07 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/12 10:52:20 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	// was hier tun wenn s1 oder s2 0 sind? dann einfach auch 0 zurueck?
	if (s1 == 0 || s2 == 0)
		return (0);
	return (ft_memcmp((const void *) s1, (const void *) s2, n) * -1);
}
