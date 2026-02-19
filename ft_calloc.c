/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 22:00:41 by lkhalaty          #+#    #+#             */
/*   Updated: 2026/02/19 22:49:06 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdint.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	count;

	if (nmemb != 0 && SIZE_MAX / nmemb < size)
		return (NULL);
	count = size * nmemb;
	ptr = malloc(count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}
