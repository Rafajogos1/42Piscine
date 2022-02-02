/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:19:54 by ramartin          #+#    #+#             */
/*   Updated: 2022/02/02 10:33:41 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (!tab)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/* #include <stdio.h>

int		main(void)
{
	int		i;
	int		*tab;
	int		a;
	int		b;

	a = 6;
	b = 22;
	tab = ft_range(a, b);
	i = 0;
	while (i < (b - a))
	{
		printf("%d\n", tab[i]);
		i++;
	}
} */
