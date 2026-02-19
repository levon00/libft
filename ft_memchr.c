/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <levon.khalatyan@edu.ysu.am>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 23:25:53 by lkhalaty          #+#    #+#             */
/*   Updated: 2026/02/13 14:09:58 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	ptr_c;
	size_t			i;

	ptr_s = (unsigned char *)s;
	ptr_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == ptr_c)
			return (&ptr_s[i]);
		i++;
	}
	return (NULL);
}
