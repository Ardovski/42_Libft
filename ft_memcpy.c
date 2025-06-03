/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:37:03 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/06/03 07:12:01 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t		i;
    char		*buffer_dest;
    const char	*buffer_src;

    i = 0;
    buffer_src = (const char *)src;
    buffer_dest = (char *)dest;
    if (!dest && !src)
        return (NULL);
    while (i < n)
    {
        buffer_dest[i] = buffer_src[i];
        i++;
    }
    return (dest);
}
