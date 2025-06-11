/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 11:37:51 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/06/11 15:26:34 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*buffer;

	buffer = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (buffer[i] == (unsigned char)c)
			return ((void *)(buffer + i));
		i++;
	}
	return (NULL);
}
