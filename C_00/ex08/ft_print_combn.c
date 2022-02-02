/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:54:15 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/18 10:54:20 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comb(int n, int comb[])
{
	int		index;
	bool	last;

	index = 0;
	while (index < n)
	{
		ft_putchar(48 + comb[index]);
		index++;
	}
	index = n - 1;
	last = true;
	while (index >= 0)
	{
		if (comb[index] != 9 - (n - 1 - index))
		{
			last = false;
			break ;
		}
		index--;
	}
	if (!last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_comb_2(int n, int curr, int comb[], int st_index)
{
	int	index;
	int	max;

	if (curr == n)
	{
		ft_comb(n, comb);
	}
	else
	{
		max = 10 - (n - curr);
		index = st_index + 1;
		while (index <= max)
		{
			comb[curr] = index;
			ft_comb_2(n, curr + 1, comb, index);
			index++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];
	int	index;

	index = 0;
	while (index < n)
	{
		comb[index] = 0;
		index++;
	}
	ft_comb_2(n, 0, comb, -1);
}
