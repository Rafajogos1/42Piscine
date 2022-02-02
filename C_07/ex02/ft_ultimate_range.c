/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:48:16 by ramartin          #+#    #+#             */
/*   Updated: 2022/02/02 10:10:34 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (!tab)
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

/* #include <stdio.h>

int		main(void)
{
	int		*range;
	int		i;
	int		a;
	int		b;

	i = 0;
	a = 2;
	b = 13;
	printf("Return: %d\n", ft_ultimate_range(&range, a, b));
	while (i < (b - a))
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
} */
