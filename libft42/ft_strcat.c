/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:36:12 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/11 17:43:13 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*str;
	char	*dst;

	str = s1;
	dst = (char *)s2;
	while (*str != '\0')
		str++;
	while (*dst != '\0')
	{
		*str = *dst;
		str++;
		dst++;
	}
	*str = '\0';
	return (s1);
}
