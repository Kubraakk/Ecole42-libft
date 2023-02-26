/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakpunar <kakpunar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:13:18 by kakpunar          #+#    #+#             */
/*   Updated: 2022/08/11 19:47:35 by kakpunar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;

	dlen = 0;
	while (dest[dlen] && dlen < size)
		dlen++;
	i = dlen;
	while (src[dlen - i] && (dlen + 1) < size)
	{
		dest[dlen] = src[dlen - i];
		dlen++;
	}
	if (i < size)
		dest[dlen] = '\0';
	return (i + ft_strlen(src));
}
int main()
{
	printf("%lu",ft_strlcat("k", "araba",1));
}

