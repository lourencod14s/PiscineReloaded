/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:32:26 by coder             #+#    #+#             */
/*   Updated: 2022/09/03 03:45:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

void	ft_putchar(char c);

void	ft_swap(int *a, int *b);

int	main(int argc, char **argv)
{
		int c;
		int i;
		char temp;

		c = 1;
		while (c < argc)
		{
			i = 0;
			while (i < argv[c][i])
			{
				if (argv[c][i] > argv[c][i + 1])
				{
					temp = argv[c][i];
					argv[c][i] = argv[c][i + 1];
					argv[c][i + 1] = temp;
				}
				i++;
			}
		c++;
		ft_putchar(argv[c][i]);
		ft_putchar('\n');
		}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	p;

	p = 0;
	while ((s1[p] == s2[p]) && (s1[p] != '\0' && s2[p] != '\0'))
		p++;
	return (s1[p] - s2[p]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}