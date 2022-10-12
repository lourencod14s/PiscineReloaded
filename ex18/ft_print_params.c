/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 21:42:05 by coder             #+#    #+#             */
/*   Updated: 2022/09/02 21:56:29 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_print_params(int argc, char argv[])
{
	int	i; // contador de argumentos
	int	v; //contador de chars dentro do vetor

	i = 1;
	v = 0;
	while (i < argc && argv[v] != '\0')
	{
		ft_putchar(argv[v]);
			v++;
	}
}

int	main(int argc, char *argv[])
{
	int	j;

	j = 1;
	while (j < argc)
	{
		ft_print_params(argc, argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}
