/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakpunar <kakpunar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:14:10 by kakpunar          #+#    #+#             */
/*   Updated: 2022/08/11 17:46:53 by kakpunar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_control(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	len;

	if (!s1)
		return (0);
	start = 0;
	while (s1[start] && ft_control(set, s1[start]))
		start++;
	len = ft_strlen(s1);
	while (len > start && ft_control(set, s1[len - 1]))
		len--;
	str = (char *)malloc(sizeof(char) * (len - start + 1));
	if (!str)
		return (0);
	i = 0;
	while (start < len)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
int main()
{
	char s1[] ="hhsdetryjhhdfghh";
	char s2[] ="hh";
	printf("%s",ft_strtrim(s1,s2));
}

