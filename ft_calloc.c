/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:54:41 by yehara            #+#    #+#             */
/*   Updated: 2024/04/25 22:03:08 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t count, size_t size)
{
    //例外処理と0埋めだけ
    void ft_bzero(void *s, size_t n)
}
int main(void)
{
	// char *str = "abcde";
    int dest;

    size_t count = 5;
    size_t size = 5;
    dest = (int)calloc(count, size);
    dest = 1;
    printf("%d\n", dest);
    return 0;
}


// 好きな時に失敗する malloc()
// #if 1
// void    *malloc(size_t n)
// {
//     static int i = 0;

//     if (i++ < 42)
//         return calloc(n, 1);
//     errno = ENOMEM;
//     return (NULL);                                                         
// }
// #endif