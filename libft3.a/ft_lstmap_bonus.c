/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:21 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/09 15:06:04 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *head, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*old;

	if (!head || !f)
		return (NULL);
	new = NULL;
	while (head)
	{
		old = ft_lstnew (f(head->content));
		if (!old)
		{
			ft_lstclear(&old, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, old);
		head = head->next;
	}
	return (new);
}
// void	*fr_result(void *result){
// 	char *new_result = malloc(ft_strlen(result) + 8); // -mapped
// 	if (!new_result)
// 		return 0;
// 	sprintf(new_result ,"%s-mapped",result);
// 	return new_result;
// }

// void del(void *content){
// 	 	free(content);
// }
// int main(){
	
// 	t_list *n1 =ft_lstnew(ft_strdup("SAID"));
// 	t_list *n2 =ft_lstnew(ft_strdup("HIBA"));
// 	t_list *n3 =ft_lstnew(ft_strdup("CHAHD"));
	
	
// 	n1->next =n2;
// 	n2->next =n3;

// 	t_list *result =ft_lstmap(n1,fr_result,del);

// 	ft_lstmap(n1,fr_result,del);
// 	t_list *t = result;
    
// 	while (t){
// 		printf("%s\n",t->content);
// 		t = t->next;
// 	} 
// 	ft_lstclear(&n1, del);
//     ft_lstclear(&result, del);
// 		while (t){
// 		printf("%shhhh\n",t->content);
// 		t = t->next;
// 	} 

// 	 puts ("is free!!");
// }
