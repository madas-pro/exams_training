/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 13:59:51 by adam              #+#    #+#             */
/*   Updated: 2025/12/26 14:24:51 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_nbrlen(int nbr)
{
	int	count;

	count = 1;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int		i;
	char	*str;
	int		nbrlen;

	if (nbr == -2147483648)
		return ("-2147483648");
	nbrlen = ft_nbrlen(nbr);
	str = malloc(nbrlen + 1);
	if (!str)
		return (NULL);
	i = nbrlen - 1;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		str[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i--;
	}
	str[i] = nbr + '0';
	str[nbrlen] = '\0';
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(15));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(100));
	printf("%s\n", ft_itoa(-20));
	printf("%s\n", ft_itoa(-2147483648));

}
