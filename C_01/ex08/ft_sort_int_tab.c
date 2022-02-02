/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:12:00 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/26 08:57:03 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_swap(int*a, int*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		r;
	int		i;
	bool	swapped;

	r = 0;
	while (true)
	{
		swapped = false;
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				swapped = true;
			}
			i++;
		}
		if (!swapped)
		{
			break ;
		}
		r++;
	}
}
