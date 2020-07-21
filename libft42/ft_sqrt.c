/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 18:52:21 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/25 19:00:36 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int num)
{
	int		sqrt;

	sqrt = 1;
	if (num < 0)
		return (0);
	while (sqrt * sqrt < 0)
		++sqrt;
	if (sqrt * sqrt == num)
		return (sqrt);
	return (0);
}
