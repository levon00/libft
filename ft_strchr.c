/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <levon.khalatyan@edu.ysu.am>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 23:37:15 by lkhalaty          #+#    #+#             */
/*   Updated: 2026/02/11 23:39:20 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	c_char;
	int		i;

	i = 0;
	c_char = (char)c;
	while (s[i] != c_char && s[i])
		i++;
	if (s[i] == c_char)
	{
		ptr = (char *)(s + i);
		return (ptr);
	}
	return (NULL);
}
