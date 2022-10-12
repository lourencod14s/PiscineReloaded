/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 00:05:56 by coder             #+#    #+#             */
/*   Updated: 2022/09/05 01:17:57 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);

char    *ft_strcpy(char *dest, char *src);

char *ft_strdup(char *src)
{
	char *dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	return (dest);
}

char    *ft_strcpy(char *dest, char *src)
{
    int i;
	
    i = 0; 
    while (src[i] != '\0')
    {
        dest[i] = src[i]; 
    i++;
    }
    dest[i] = '\0'; 
    return (dest);     
}

int	main()
{
	char	*stringsrc = "HumanCoder";
	char	stringdest = NULL;
	
	printf("%s\n", ft_strdup(stringsrc));	
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}