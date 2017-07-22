/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flthibau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 21:20:04 by flthibau          #+#    #+#             */
/*   Updated: 2017/07/19 18:19:36 by flthibau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_next_word(char c)
{
	if ((c >= 1 && c <= 47)
	|| (c >= 58 && c <= 64)
	|| (c >= 91 && c <= 96)
	|| (c > 122))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_next_word(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 'a' + 'A';
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return (str);
}
