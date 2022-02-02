/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:53:18 by ramartin          #+#    #+#             */
/*   Updated: 2022/01/26 09:25:02 by ramartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *dest)
{
	unsigned int	c;

	c = 0;
	while (dest[c] != '\0')
		c++;
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	d_len;
	unsigned int	r;

	d = dest;
	s = src;
	r = size;
	while (r-- != 0 && *d != '\0')
		d++;
	d_len = d - dest;
	r = size - d_len;
	if (r == 0)
		return (d_len + str_len(src));
	while (*src != '\0')
	{
		if (r > 1)
		{
			*d++ = *src;
			r--;
		}
		src++;
	}
	*d = '\0';
	return (d_len + (src - s));
}
