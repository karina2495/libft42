/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:36:02 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/20 13:42:35 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*point;

	if (!(point = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		point->content = NULL;
		point->content_size = 0;
	}
	else
	{
		if (!(point->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(point->content, content, content_size);
		point->content_size = content_size;
	}
	point->next = NULL;
	return (point);
}
