/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:23:54 by coder             #+#    #+#             */
/*   Updated: 2022/08/26 03:11:39 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	count = 1;
	if (nb > 0)
	{
		while (count * count <= nb)
		{
			if (count * count == nb)
				return (count);
			else if (count >= 46341)
				return (0);
		count++;
		}
	}
	return (0);
}

/*int		main()
{
	printf("-25 = %d \n", ft_sqrt(-10));
	printf("-1 = %d \n", ft_sqrt(-1));
	printf(" 0 = %d \n", ft_sqrt(0));
	printf(" 1 = %d \n", ft_sqrt(1));
	printf(" 2 = %d \n", ft_sqrt(2));
	printf(" 3 = %d \n", ft_sqrt(3));
	printf(" 4 = %d \n", ft_sqrt(4));
	printf(" 9 = %d \n", ft_sqrt(9));
	printf(" 16 = %d \n", ft_sqrt(16));
	printf(" 1764 = %d \n", ft_sqrt(1764));
}*/