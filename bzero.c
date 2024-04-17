/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:45:18 by yehara            #+#    #+#             */
/*   Updated: 2024/04/17 21:06:25 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <strings.h>
#include <stdio.h>

// void bzero(void *s, size_t n)
// {

// }
int main(void)
{
    char *str = "hello world";
    size_t num = 0;
    
    printf("%s\n", str);
    bzero(str, num);
    printf("%s\n", str);
}