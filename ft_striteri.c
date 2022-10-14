/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 08:31:07 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/14 08:33:07 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	length;

	if (s == 0)
		return ;
	length = ft_strlen(s);
	i = 0;
	while (i < length)
	{
		f(i, s);
		s++;
		i++;
	}
}
