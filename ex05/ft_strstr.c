/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flthibau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 14:41:16 by flthibau          #+#    #+#             */
/*   Updated: 2017/07/20 14:17:11 by flthibau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;
	int charcount;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (i < ft_strlen(str))
	{
		n = i;
		charcount = 0;
		while (charcount <= ft_strlen(to_find))
		{
			if (charcount == ft_strlen(to_find))
				return (&str[n - charcount]);
			if (to_find[charcount] != str[n])
				break ;
			charcount++;
			n++;
		}
		i++;
	}
	return (0);
}
