/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:40:21 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/20 19:27:04 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*str;
	t_list	*cmp;

	cmp = *alst;
	while (alst && del && cmp)
	{
		str = cmp;
		del(cmp->content, cmp->content_size);
		free(cmp);
		cmp = str->next;
	}
	*alst = NULL;
}
