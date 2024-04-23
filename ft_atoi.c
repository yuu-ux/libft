/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:38:21 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 16:51:02 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ascii_to_int(char *str, int flag)
{
    unsigned long ret;

    ret = 0;

    while (*str >= '\0' && *str <= '9')
    {
        ret *= 10;
        if (flag == 1 && ret > (unsigned long)LONG_MAX - (*str - '0')) // 整数であるかつretがMAX
            return ((int)LONG_MAX);
        if (flag == -1 && ret > (unsigned long)LONG_MAX + 1 - (*str - '0'))
            return ((int)LONG_MIN);
        ret += *str - '0';
        str++;
    }
    return (ret)
}

int atoi(const char *str)
{
    int i;
    int flag;
    int result;

    i = 0;
    flag = 1;

    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r')
    {
        str++;
        if (*str == '-')
            flag = -1;
        str++;
    }

    result = ascii_to_int(str, flag);
    return ((int)(flag * result))
}

int main(void)
{
    char *str = "a124";
    printf("%d\n", atoi(str));
    return 0;
}