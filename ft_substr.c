/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:50:18 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/13 19:30:28 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	difference;
	char			*sub;

	if (s == 0)
		return (0);
	difference = start + len - ft_strlen(s);
	if (difference > 0)
		len -= difference;
	sub = malloc(len + 1);
	if (sub == 0)
		return (0);
	sub[len] = 0;
	while (len > 0)
	{
		sub[len - 1] = s[start + len - 1];
		len--;
	}
	return (sub);
}
