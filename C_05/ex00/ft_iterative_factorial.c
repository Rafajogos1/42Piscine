/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 09:57:43 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/31 11:27:43 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fc;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fc = nb;
	while (nb > 1)
	{
		nb--;
		fc *= nb;
	}
	return (fc);
}

/* #include <stdio.h>

int main ()
{
  printf("%d\n", ft_iterative_factorial(1));
  printf("%d\n", ft_iterative_factorial(2));
  printf("%d\n", ft_iterative_factorial(3));
  printf("%d\n", ft_iterative_factorial(4));
  printf("%d\n", ft_iterative_factorial(5));
  printf("%d\n", ft_iterative_factorial(6));
  printf("%d\n", ft_iterative_factorial(7));
  printf("%d\n", ft_iterative_factorial(8));
  printf("%d\n", ft_iterative_factorial(9));
  printf("%d\n", ft_iterative_factorial(10));
  printf("%d\n", ft_iterative_factorial(11));
  printf("%d\n", ft_iterative_factorial(12));
  printf("0! = %d\n", ft_iterative_factorial(0));
  printf("negative: %d\n", ft_iterative_factorial(-5));

} */
