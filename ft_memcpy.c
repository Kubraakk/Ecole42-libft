/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kubra <kubra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:16:07 by kakpunar          #+#    #+#             */
/*   Updated: 2022/09/28 12:48:43 by kubra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dstc;
	unsigned char	*srcc;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dstc = (unsigned char *) dst;
	srcc = (unsigned char *) src;
	while (i < n)
	{
		dstc[i] = srcc[i];
		i++;
	}
	return (dst);
}
/*
int main()
{
	char s[] = "kubra";
	char k[] = "akpunar";
	char *sonuc;
	sonuc = ft_memcpy(s,k,3);
	printf("%s",sonuc);
}
*/