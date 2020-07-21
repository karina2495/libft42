/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:19:51 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/14 15:59:50 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*dst;
	char	len;
	char	*strdst;

	str = (char *)s1;
	dst = (char *)s2;
	if (!str || !dst)
		return (NULL);
	if (str || dst)
	{
		len = ft_strlen(str) + ft_strlen(dst) + 1;
		if (!(strdst = (char *)malloc(sizeof(char) * len)))
			return (NULL);
		ft_strcpy(strdst, str);
		ft_strcat(strdst, dst);
		return (strdst);
	}
	return (NULL);
}
