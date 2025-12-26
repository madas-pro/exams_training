/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 09:18:48 by adam              #+#    #+#             */
/*   Updated: 2025/12/24 12:29:45 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main(void)
{
    char *tests[][2] = {
        {"bonjour", "bonjour"},
        {"bonjour", "bonsoir"},
        {"abc", "abd"},
        {"abcd", "abc"},
        {" ", " "},
        {"", "a"},
        {"a", ""},
    };

    int i = 0;
    int result_ft;
    int result_lib;

    while (i < 7)
    {
        result_ft = ft_strcmp(tests[i][0], tests[i][1]);
        result_lib = strcmp(tests[i][0], tests[i][1]);

        printf("Test %d:\n", i + 1);
        printf("  s1 = \"%s\"\n", tests[i][0]);
        printf("  s2 = \"%s\"\n", tests[i][1]);
        printf("  ft_strcmp = %d\n", result_ft);
        printf("  strcmp    = %d\n\n", result_lib);

        i++;
    }
    return 0;
}
*/
