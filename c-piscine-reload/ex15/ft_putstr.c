/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:16:53 by jfontbon          #+#    #+#             */
/*   Updated: 2025/05/05 11:18:44 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*int	main(void)
{
	char	mystr[3];
	char	*ptr;

	mystr[0] = 'a';
	mystr[1] = 'b';
	mystr[2] = '\0';
	ptr = mystr;
	ft_putstr(ptr);
	return (0);
}*/
