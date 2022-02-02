/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:21:44 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/31 12:59:54 by ramartin         ###   ########.fr       */
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

/* #include <stdio.h>

int main ()
{
    printf("%d\n", ft_is_prime(12));
    printf("%d\n", ft_is_prime(13));
    printf("%d\n", ft_is_prime(17));
    printf("%d\n", ft_is_prime(9));
    printf("%d\n", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(0));
} */
