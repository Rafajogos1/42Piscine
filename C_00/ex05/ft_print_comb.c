/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:40:01 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/17 15:40:04 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int d, int e, int f)
{
	ft_putchar(d);
	ft_putchar(e);
	if (d == '7')
	{
		ft_putchar(f);
	}
	else
	{
		ft_putchar(f);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	d;
	int	e;
	int	f;

	d = '0';
	e = '1';
	f = '2';
	while (d <= '7')
	{
		while (e <= '8')
		{
			while (f <= '9')
			{
				ft_print(d, e, f);
				f++;
			}
			f = ++e + 1;
		}
		e = ++d;
	}
}
