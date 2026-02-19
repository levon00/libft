/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <levon.khalatyan@edu.ysu.am>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 22:53:49 by lkhalaty          #+#    #+#             */
/*   Updated: 2026/02/13 13:57:42 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calculate(char *ptr)
{
	char	flag;
	int		answer;

	answer = 0;
	flag = '+';
	if (*(ptr) == '-')
		flag = '-';
	if (*ptr <= '9' && *ptr >= '0')
		ptr = ptr;
	else if (*(ptr++) > '9' || *(ptr) < '0')
		return (0);
	while (*ptr <= '9' && *ptr >= '0')
	{
		answer = answer * 10 + (*ptr - '0');
		ptr++;
	}
	if (flag == '-')
		return (answer * (-1));
	return (answer);
}

int	ft_atoi(const char *nptr)
{
	char	*pt;
	int		answer;

	pt = (char *)nptr;
	while (pt)
	{
		if (*pt == ' ' || *pt == '\v' || *pt == '\n')
			pt++;
		else if (*pt == '\f' || *pt == '\t' || *pt == '\r')
			pt++;
		else if (*pt == '+' || *pt == '-' || (*pt <= '9' && *pt >= '0'))
			break ;
		else
			return (0);
	}
	answer = calculate(pt);
	return (answer);
}
/*
int main()
{
	int	i;
	const char *nptr = "085";
	i = ft_atoi(nptr);
	printf("%i\n", i);
}
*/
