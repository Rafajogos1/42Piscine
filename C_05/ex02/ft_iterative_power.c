/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:33:56 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/31 11:39:49 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	res = 1;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

/* #include <stdio.h>
int main ()
{
	printf("%d\n", ft_iterative_power(3,3));
	printf("%d\n", ft_iterative_power(3,1));
	printf("%d\n", ft_iterative_power(0,0));
	printf("%d\n", ft_iterative_power(3,-3));
	printf("%d\n", ft_iterative_power(2,4));
	printf("%d\n", ft_iterative_power(2,10));
	printf("%d\n", ft_iterative_power(3,2));
} */
