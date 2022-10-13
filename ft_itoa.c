/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbohm <gbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:19:23 by gbohm             #+#    #+#             */
/*   Updated: 2022/10/13 21:15:42 by gbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

static int	get_count(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		if (n == INT_MIN)
			n = INT_MAX;
		else
			n *= -1;
		count++;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;

	if (n == INT_MIN)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	count = get_count(n);
	str = malloc(count);
	if (str == 0)
		return (0);
	str[--count] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n)
	{
		str[--count] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
