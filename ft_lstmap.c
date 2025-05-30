/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:57:58 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/05/30 17:04:47 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	char	*new;

	if (!lst || !f || !del)
		return ;
	new = malloc()
	temp = lst;
	while (lst != NULL)
	{
		temp->content = f(temp->content);
		temp = temp->next;
	}
	
	
}