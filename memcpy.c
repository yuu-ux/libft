/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:05:58 by yehara            #+#    #+#             */
/*   Updated: 2024/04/18 21:54:27 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define BUF_SIZE 16
void *memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    
}

int main(void)
{
    size_t num = 18;
    char *src = "hello";
    char dst[BUF_SIZE];
 
    printf("コピー前: %s\n", dst);
    memcpy(dst, src, num);
    printf("コピー後: %s\n", dst);
    return 0;
}