/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:57:22 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/05 11:37:29 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_dst;
	char	*c_src;

	c_dst = (char *) dst;
	c_src = (char *) src;
	if (c_src == 0 && c_dst == 0)
		return (0);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (dst > src && len--)
		c_dst[len] = c_src[len];
	return (dst);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char src[]  = "aaaaaaaaaa";
	char dest[] = "oldstring";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 6);
	printf("After memmove dest = %s, src = %s\n", dest, src);
	return (0);
}*/
