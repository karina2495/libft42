/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:31:39 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/19 11:24:27 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	len;
	int		i;
	char	*dst;

	if (s == NULL)
		return (NULL);
	dst = (char *)s;
	if (dst || f)
	{
		len = ft_strlen(dst) + 1;
		if (!(str = (char *)malloc((sizeof(char) * len))))
			return (NULL);
		i = 0;
		while (dst[i] != '\0')
		{
			str[i] = f(dst[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
