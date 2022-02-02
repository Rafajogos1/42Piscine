/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:29:36 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/31 11:31:51 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}

/* #include <stdio.h>

int main ()
{
  printf("%d\n", ft_recursive_factorial(1));
  printf("%d\n", ft_recursive_factorial(2));
  printf("%d\n", ft_recursive_factorial(3));
  printf("%d\n", ft_recursive_factorial(4));
  printf("%d\n", ft_recursive_factorial(5));
  printf("%d\n", ft_recursive_factorial(6));
  printf("%d\n", ft_recursive_factorial(7));
  printf("%d\n", ft_recursive_factorial(8));
  printf("%d\n", ft_recursive_factorial(9));
  printf("%d\n", ft_recursive_factorial(10));
  printf("%d\n", ft_recursive_factorial(11));
  printf("%d\n", ft_recursive_factorial(12));
  printf("0! = %d\n", ft_recursive_factorial(0));
  printf("negative: %d\n", ft_recursive_factorial(-5));
  return (0);
} */
