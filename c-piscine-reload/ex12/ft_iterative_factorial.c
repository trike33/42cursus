/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:13:44 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/03 19:57:51 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	result = nb;
	i = 1;
	while (i < nb)
	{
		result *= (nb - i);
		i++;
	}
	return (result);
}

/*int		main(void)
{
	int	i = -5;
	printf("%i\n", ft_iterative_factorial(i));
	return (0);
}*/
