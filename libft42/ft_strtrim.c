/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:08:13 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/15 16:33:58 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*dst;
	char	*str;

	if (s)
	{
		while (*s == ' ' || *s == '\t' || *s == '\n')
			++s;
		if (*s == '\0')
			return (ft_strdup(s));
		dst = (char *)s;
		while (*dst)
			++dst;
		while (*--dst == ' ' || *dst == '\t' || *dst == '\n')
			;
		if (!(str = (char *)malloc(dst - s + 2)))
			return (NULL);
		ft_strncpy(str, s, dst - s + 1);
		*(str + (dst - s + 1)) = '\0';
		return (str);
	}
	return (NULL);
}
