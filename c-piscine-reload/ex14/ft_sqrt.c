/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:48:38 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/02 12:02:50 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int	i = 2;
	printf("%i\n", ft_sqrt(i));
	return (0);
}*/
