/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:47:35 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/31 11:55:10 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1 || index == 2)
		return (1);
	if (index == 0)
		return (0);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* #include <stdio.h>

int main ()
{
    printf("%d\n", ft_fibonacci(0));
    printf("%d\n", ft_fibonacci(1));
    printf("%d\n", ft_fibonacci(2));
    printf("%d\n", ft_fibonacci(3));
    printf("%d\n", ft_fibonacci(4));
    printf("%d\n", ft_fibonacci(5));
    printf("%d\n", ft_fibonacci(6));
    printf("%d\n", ft_fibonacci(7));
    printf("%d\n", ft_fibonacci(8));
    printf("%d\n", ft_fibonacci(-4));
    return 0;
} */
