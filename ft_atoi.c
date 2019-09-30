/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:29:22 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/22 19:33:13 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		far;
	long	rez;

	far = 1;
	rez = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			far = -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		rez = rez * 10 + (*str - 48);
		++str;
	}
	return (far * rez);
}
