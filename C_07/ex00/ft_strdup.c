/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 08:55:02 by ramartin          #+#    #+#             */
/*   Updated: 2022/02/02 10:32:46 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	str = malloc(sizeof((*src) * (len)));
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	int 	j;
	int		l;
	char	*test;

	j = 0;
	l = 0;
	if (argc > 1)
	{
		test = ft_strdup(argv[1]);
		while (test[j])
		{
			write(1, &test[j], 1);
			j++;
		}
		while (test[l])
			l++;
		printf("%lu", sizeof((*test) * (l)));
		write(1, "\n", 1);
	}
} */
