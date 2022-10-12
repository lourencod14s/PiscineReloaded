/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:31:56 by coder             #+#    #+#             */
/*   Updated: 2022/08/30 20:47:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*int main()
{
	printf("-9! = %d \n", ft_recursive_factorial(-9));
	printf(" 0! = %d \n", ft_recursive_factorial(0));
	printf(" 1! = %d \n", ft_recursive_factorial(1));
	printf(" 2! = %d \n", ft_recursive_factorial(2));
	printf(" 3! = %d \n", ft_recursive_factorial(3));
	printf(" 10! = %d \n", ft_recursive_factorial(10));
}*/