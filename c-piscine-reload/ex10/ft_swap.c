/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:45:45 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 08:15:24 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 0;
	b = 1;
	*ptrA = &a;
	*ptrB = &b;
	ft_swap(ptra, ptrb);
	return (0);
}*/
