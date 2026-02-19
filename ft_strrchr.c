/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 22:00:42 by lkhalaty          #+#    #+#             */
/*   Updated: 2026/02/19 22:00:42 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		flag;
	int		i;

	i = 0;
	flag = 0;
	c = (char)c;
	while (s[i])
	{
		if (s[i] == c)
		{
			ptr = (char *)(s + i);
			flag = 1;
		}
		i++;
	}
	if (c == '\0')
	{
		ptr = (char *)(s + i);
		flag = 1;
	}
	if (flag)
		return (ptr);
	return (NULL);
}
