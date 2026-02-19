/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <levon.khalatyan@edu.ysu.am>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 23:56:17 by lkhalaty          #+#    #+#             */
/*   Updated: 2026/02/11 23:59:21 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char	*ptr;
	size_t	count;

	ptr = (char *)s;
	count = 0;
	while (*ptr)
	{
		count++;
		ptr++;
	}
	return (count);
}
