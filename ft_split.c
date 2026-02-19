/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 22:00:42 by lkhalaty          #+#    #+#             */
/*   Updated: 2026/02/19 22:00:42 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	words_count(const char *s, char c)
{
	size_t	count;
	int		flag;

	flag = 0;
	count = 0;
	while (*s)
	{
		if (*s != c)
			flag = 1;
		else if (*s == c && flag)
		{
			flag = 0;
			count++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	if (!*s && flag)
		count++;
	return (count);
}

void	free_malloc(char **arr, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(arr[j]);
		j++;
	}
	free(arr);
}

char	*get_next_word(const char **s, char c)
{
	size_t		len;
	const char	*start;

	while (**s && **s == c)
		(*s)++;
	start = *s;
	len = 0;
	while (**s && **s != c)
	{
		len++;
		(*s)++;
	}
	return (ft_substr(start, 0, len));
}

int	create_words(size_t count, const char *s, char c, char **arr)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		arr[i] = get_next_word(&s, c);
		if (!arr[i])
		{
			free_malloc(arr, i);
			return (0);
		}
		i++;
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	size_t	count;

	if (!s)
		return (NULL);
	count = words_count(s, c);
	arr = (char **)ft_calloc(sizeof(char *), count + 1);
	if (!arr)
		return (NULL);
	if (!create_words(count, s, c, arr))
		return (NULL);
	return (arr);
}
