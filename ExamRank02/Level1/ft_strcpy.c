/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 21:10:05 by adam              #+#    #+#             */
/*   Updated: 2025/12/22 22:33:13 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}

/*
int main(void)
{
	char	src[] = "Hello, world!";
	char	dest[50];

	ft_strcpy(dest, src);

	write(1, dest, 13);
	write(1, "\n", 1);

	return (0);
}
*/