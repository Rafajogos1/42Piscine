/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:44:24 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/16 11:44:27 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first_line(int x)
{
	int	i;

	i = 1;
	ft_putchar('A');
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_middle(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j < y - 1)
	{
		ft_putchar('B');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i++;
		}
		if (x != 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		j++;
	}
}

void	ft_end(int x)
{
	int	i;

	i = 1;
	ft_putchar('C');
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_first_line(x);
		if (y != 1)
		{
			ft_middle(x, y);
			ft_end(x);
		}
	}
}
