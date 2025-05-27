/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:54:49 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/05/27 15:34:58 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	const unsigned char		*buffer_src;
	unsigned char			*buffer_dest;

	i = len;
	buffer_dest = (unsigned char *)dst;
	buffer_src = (const unsigned char *)src;
	if (src == dst)
		return (dst);
	else if (buffer_dest > buffer_src)
	{
		while (i-- > 0)
			buffer_dest[i] = buffer_src[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			buffer_dest[i] = buffer_src[i];
			i++;
		}
	}
	return (dst);
}
