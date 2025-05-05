/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:29:30 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 08:16:07 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	mystr[3];
	char	*ptr;
	int	result;

	mystr[0] = 'a';
	mystr[1] = 'b';
	mystr[2] = '\0';
	ptr = mystr;
	result = ft_strlen(ptr);
	return (0);
}*/
