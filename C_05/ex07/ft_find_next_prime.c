/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:35:07 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/31 12:59:26 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	max;

	if (nb <= 1)
		return (0);
	i = 2;
	max = nb / i;
	while (i < max)
	{
		if (nb % i == 0)
			return (0);
		max = (nb / i) + (nb % i);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb > 2 && nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}

/* #include <stdio.h>

int main ()
{
    printf("%d\n", ft_find_next_prime(-7));
    printf("%d\n", ft_find_next_prime(214748364));
    printf("%d\n", ft_find_next_prime(685));
    printf("%d\n", ft_find_next_prime(2147483646));
} */
