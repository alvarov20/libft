/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:03:19 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/05 12:34:51 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[j + i] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char const	*str;
	char const	*str1;

	str = "Hola Buenas ";
	str1 = "Que tal estas?";

	printf("%s\n", ft_strjoin(str, str1));
	return (0);
}*/
