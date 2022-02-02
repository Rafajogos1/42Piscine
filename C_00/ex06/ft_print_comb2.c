/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:35:58 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/18 10:36:23 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int d, int e, bool last)
{
	ft_putchar(48 + d / 10);
	ft_putchar(48 + d % 10);
	ft_putchar(' ');
	ft_putchar(48 + e / 10);
	ft_putchar(48 + e % 10);
	if (last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		d;
	int		e;
	bool	last;

	d = 0;
	while (d <= 99)
	{
		e = d + 1;
		while (e <= 99)
		{
			last = !(d == 98 && e == 99);
			ft_print(d, e, last);
			e++;
		}
		d++;
	}
}
