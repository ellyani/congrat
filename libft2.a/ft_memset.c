/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:54 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/02 17:06:50 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*led;

	led = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		led[i] = (unsigned char)c;
		i++;
	}
	return (led);
}
// int main(){
// 	char buffer[4];
// 	int nb = 1337;
// 	char c;
// 	int i = 3;
// 	while (nb > 0){
// 		c = (nb % 10) + '0';
// 		ft_memset(buffer + i, c ,1);
// 		i--;
// 		nb /=10;
// 	}
// 	printf("%s\n",buffer);
// }