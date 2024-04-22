/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:52:59 by yehara            #+#    #+#             */
/*   Updated: 2024/04/22 20:32:20 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

//nを超えない文字列を比較する
//'\0'の後は比較しない。文字列のみ比較する
//辞書順に比較する（abcdefgってこと）
//戻り値は0以上, 0以下, 0未満の整数
//n文字目を比較する。文字が違えばs2 - s1をして一致していれば0、s2の方が大きければ1s2の方が小さければ-1を返す

// int	strncmp(const char *s1, const char *s2, size_t n)
// {

// }

int main(void)
{
    char str[] = "ABC";
    printf("ABC: ABD   = %d\n", strncmp(str, "ABD", 3));
    printf("ABC: ABC   = %d\n", strncmp(str, "ABC", 2));
    printf("ABC: AAA   = %d\n", strncmp(str, "AAA", 2));
    printf("ABC: ABCD  = %d\n", strncmp(str, "ABCD", 2));
    printf("ABC: AB    = %d\n", strncmp(str, "AB", 2));
    printf("ABC: B     = %d\n", strncmp(str, "B", 2));
    printf("ABC: A     = %d\n", strncmp(str, "A", 2));
    return 0;
}