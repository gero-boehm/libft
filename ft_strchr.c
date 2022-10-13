/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:14:00 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/12 10:44:02 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	// was hier tun, wenn s is 0? return 0?
	if (s == 0)
		return (0);
	len = ft_strlen(s);
	i = 0;
	while (i < len + 1)
	{
		if (s[i] == (char) c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}
