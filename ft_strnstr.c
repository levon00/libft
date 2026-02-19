/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <levon.khalatyan@edu.ysu.am>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 00:20:22 by lkhalaty          #+#    #+#             */
/*   Updated: 2026/02/15 13:50:07 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && little[j] && big[i + j])
		{
			if (big[i + j] != little[j])
				break ;
			j++;
		}
		if (!little[j])
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
