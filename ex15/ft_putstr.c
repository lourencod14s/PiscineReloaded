/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:27:08 by coder             #+#    #+#             */
/*   Updated: 2022/09/01 23:10:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char	*ptr;
	char	str[] = "HumanCoder42SP\n";
	
	ptr = str;
	ft_putstr(ptr);
}*/