/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:05:56 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/03 13:36:43 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **head, t_list *new)
{
	if (!head || !new)
		return ;
	new->next = *head;
	*head = new;
}
// int main(){
// 	char s[] = "said";
// 	char s2[] = "hiba";
// 	char s3[] = "salim";
// 	t_list *result1;
// 	t_list *result2;
// 	t_list *result3;
// 	result1 = ft_lstnew(s);
// 	result2= ft_lstnew(s2);
// 	result3= ft_lstnew(s3);
// 	ft_lstadd_back(&result2,result3);
// 	ft_lstadd_front(&result3,result2);
// 	ft_lstadd_front(&result2,result3);
// 	while (result3){
// 		printf("%s\n",result3->content);
// 		result3 = result3->next;
// 	}
	
// }
