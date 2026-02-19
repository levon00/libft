/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <levon.khalatyan@edu.ysu.am>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 23:33:18 by lkhalaty          #+#    #+#             */
/*   Updated: 2026/02/11 23:34:02 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d_ptr;
	unsigned char	*s_ptr;
	size_t			i;

	d_ptr = (unsigned char *)dest;
	s_ptr = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		if (s_ptr < d_ptr)
		{
			d_ptr[n - 1] = s_ptr[n - 1];
			n--;
		}
		else
		{
			d_ptr[i] = s_ptr[i];
			i++;
		}
	}
	return (dest);
}
