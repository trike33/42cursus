/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:34:36 by jfontbon          #+#    #+#             */
/*   Updated: 2025/05/05 08:36:05 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return (0);
}*/
