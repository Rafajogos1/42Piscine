/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:41:16 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/31 11:46:32 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		power--;
		return (nb * ft_recursive_power(nb, power));
	}
	else
	{
		return (nb);
	}
}

/* #include <stdio.h>

int main ()
{
	printf("%d\n", ft_recursive_power(3,3));
	printf("%d\n", ft_recursive_power(3,0));
	printf("%d\n", ft_recursive_power(0,0));
	printf("%d\n", ft_recursive_power(3,-3));
	printf("%d\n", ft_recursive_power(2,4));
	printf("%d\n", ft_recursive_power(2,10));
	printf("%d\n", ft_recursive_power(2,2));
} */
