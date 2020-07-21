/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:55:15 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/23 15:29:50 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_size(long n)
{
	int			size;

	size = 0;
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	return (size + 1);
}

static long		cast_to_long(int n)
{
	long		num;

	num = (long)n;
	if (n < 0)
		num = -num;
	return (num);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			len;
	int			is_negative;
	long		num;

	is_negative = 0;
	len = ((n < 0) ? 1 : 0);
	if (n < 0)
		is_negative = 1;
	num = cast_to_long(n);
	len += get_size(num);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (num > 9)
	{
		str[--len] = num % 10 + '0';
		num = num / 10;
	}
	str[--len] = num + '0';
	if (is_negative)
		str[--len] = '-';
	return (str);
}
