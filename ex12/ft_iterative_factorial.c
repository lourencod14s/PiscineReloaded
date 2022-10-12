/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 23:27:57 by coder             #+#    #+#             */
/*   Updated: 2022/08/26 04:25:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	calc;

	calc = 1;
	if (nb < 0 || nb >= 17)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		while (nb > 1)
			calc *= nb --;
	return (calc);
}

/*int main()
{
	printf("-9! = %d \n", ft_iterative_factorial(-9));
	printf(" 0! = %d \n", ft_iterative_factorial(0));
	printf(" 1! = %d \n", ft_iterative_factorial(1));
	printf(" 2! = %d \n", ft_iterative_factorial(2));
	printf(" 3! = %d \n", ft_iterative_factorial(3));
	printf(" 17! = %d \n", ft_iterative_factorial(17));
}*/