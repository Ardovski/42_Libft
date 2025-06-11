/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:13:06 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/06/11 15:46:14 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t i;
	unsigned char *dest;

	dest = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		dest[i] = 0;
		i++;
	}
}
