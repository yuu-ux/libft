/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:00:24 by yehara            #+#    #+#             */
/*   Updated: 2024/05/03 21:03:47 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
//     char *content = "Hello, world!";
//     t_list *node = ft_lstadd(content);
// 	ft_lstadd_front();

//     if (node == NULL)
//     {
//         printf("Error: Failed to create a new node.\n");
//         return (1);
//     }

//     printf("Content: %s\n", node->content);
//     printf("Next: %p\n", node->next);

//     // nodeを解放する
//     free(node);

//     return (0);
// }