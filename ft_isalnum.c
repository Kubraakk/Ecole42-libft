/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakpunar <kakpunar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:15:27 by kakpunar          #+#    #+#             */
/*   Updated: 2022/08/16 18:04:18 by kakpunar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) != 0) || (ft_isdigit(c) != 0))
		return (1);
	else
		return (0);
}

int main()
{
	printf("%d",ft_isalnum('a'));
}