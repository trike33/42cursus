/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:13:44 by jfontbon          #+#    #+#             */
/*   Updated: 2025/05/05 11:42:48 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb > 0)
		{
			res *= nb;
			nb -= 1;
		}
		return (res);
	}
	else
		return (0);
}

/*int		main(void)
{
	int	i = -5;
	printf("%i\n", ft_iterative_factorial(i));
	return (0);
}*/
