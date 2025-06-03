/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:30:28 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/06/03 07:20:47 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	malloc_size;
	void	*malloc_ptr;

	malloc_size = nmemb * size;
	malloc_ptr = malloc(malloc_size);
	if (!malloc_ptr)
		return (NULL);
	ft_memset(malloc_ptr, 0, malloc_size);
	return (malloc_ptr);
}
