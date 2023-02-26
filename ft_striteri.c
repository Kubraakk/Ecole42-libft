/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kubra <kubra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:13:02 by kakpunar          #+#    #+#             */
/*   Updated: 2022/10/01 23:57:24 by kubra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

void lower(unsigned int i , char *s)
{
	if(s[0] >= 65 && s[0] <= 90)
	{
		s[0] = s[0]+32;
	}
	
}

int main()
{
	char str[] = "KUBRA";
	ft_striteri(str,lower);
	printf("%s",str);
}