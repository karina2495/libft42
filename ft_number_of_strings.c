/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_of_strings.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 19:06:15 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/25 19:09:17 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_number_of_strings(char const *s, char c)
{
	size_t		size;

	size = 0;
	while (*s == c)
		s++;
	if (*s == '\0')
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
		{
			size++;
			while (*s == c)
				s++;
		}
		if (*s != '\0')
			s++;
	}
	return (size + 1);
}
