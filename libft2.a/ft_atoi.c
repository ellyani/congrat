/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:05:02 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/11 17:50:06 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t				i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - 48);
		if ((size_t)result > (unsigned long int) && sign == -1)
			return (-1);
		if ((size_t)result > (unsigned long int)+ 1 && sign == 1)
			return (1);
		i++;
	}
	return (result * sign);
}
int main(){
	printf("%d\n",ft_atoi("9223372036854775807"));
	printf("%d\n",atoi("-922337203685477580167"));
}