/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 12:18:22 by adam              #+#    #+#             */
/*   Updated: 2025/12/24 12:30:23 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void)
{
    const char *tests[] = {
        "bonjour",
        "",
        "hello world",
        "42",
        "test avec espaces"
    };

    int i = 0;
    char *dup_ft;
    char *dup_lib;

    while (i < 5)
    {
        dup_ft = ft_strdup(tests[i]);
        dup_lib = strdup(tests[i]);

        printf("Test %d:\n", i + 1);
        printf("  original = \"%s\"\n", tests[i]);
        printf("  ft_strdup = \"%s\"\n", dup_ft);
        printf("  strdup    = \"%s\"\n", dup_lib);

        if (dup_ft && dup_lib)
        {
            printf("  adresses : ft=%p | lib=%p\n",
                   (void *)dup_ft, (void *)dup_lib);
        }

        free(dup_ft);
        free(dup_lib);
        printf("\n");
        i++;
    }
    return 0;
}
*/