/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 12:32:21 by adam              #+#    #+#             */
/*   Updated: 2025/12/24 13:03:32 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int		i;
	int		range;
	int		*str;

	i = 0;
	range = end - start;
	if (range < 0)
		range = -range;
	range += 1;
	str = malloc(range * sizeof(int));
	if (!str)
		return (NULL);
	while (i < range)
	{
		if (start < end)
			str[i] = start + i;
		else
			str[i] = start - i;
		i++;
	}
	return (str);
}

// int main(void)
// {
//     printf("%ls\n", ft_range(1, 3));
//     printf("%ls\n", ft_range(-1, 2));
//     printf("%ls\n", ft_range(0, 0));
//     printf("%ls\n", ft_range(0, -3));
//     printf("%ls\n", ft_range(0, 0));
// }
