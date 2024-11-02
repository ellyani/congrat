/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:05:56 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/02 18:28:10 by sellyani         ###   ########.fr       */
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
int main(){
	char s[] = "said";
	char s2[] = "hiba";
	t_list *result1;
	t_list *result2;
	result1 = ft_lstnew(s);
	result2= ft_lstnew(s2);
	
	ft_lstadd_front(&result1,result2);
	while (result2){
		printf("%s\n",result2->content);
		result2 = result2->next;
	}
	
}
