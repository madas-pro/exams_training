/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:27:17 by adam              #+#    #+#             */
/*   Updated: 2025/12/24 12:29:24 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/*
int main(void)
{
    const char *tests[][2] = {
        {"hello world", " "},
        {"bonjour", "xyz"},
        {"abcde", "c"},
        {"abcde", "de"},
        {"123456", "5"},
        {"", "abc"},
        {"abcdef", ""},
    };

    size_t res_ft;
    size_t res_lib;
    int i = 0;

    while (i < 7)
    {
        res_ft = ft_strcspn(tests[i][0], tests[i][1]);
        res_lib = strcspn(tests[i][0], tests[i][1]);

        printf("Test %d:\n", i + 1);
        printf("  s      = \"%s\"\n", tests[i][0]);
        printf("  reject = \"%s\"\n", tests[i][1]);
        printf("  ft_strcspn = %zu\n", res_ft);
        printf("  strcspn    = %zu\n\n", res_lib);

        i++;
    }
    return 0;
}
*/
