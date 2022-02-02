/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:55:32 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/31 12:19:26 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}

/* #include <stdio.h>

int main ()
{
    printf("%d\n",ft_sqrt(9));
    printf("%d\n",ft_sqrt(16));
    printf("%d\n",ft_sqrt(25));
    printf("%d\n",ft_sqrt(225));
    return 0;
} */
