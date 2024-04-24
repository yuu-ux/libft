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

int ascii_to_int(const char *str, int flag)
{
    unsigned long i;
    int result :

        i = 0;

    while (*str >= '0' && *str <= '9')
    {
        result = i * 10 + str[i];
        i++;
    }
    // while (*str >= '\0' && *str <= '9')
    // {
    //     i *= 10;
    //     if (flag == 1 && i > (unsigned long)LONG_MAX - (*str - '0'))
    //         return((int)LONG_MAX);
    //     if (flag == -1 && i > (unsigned long)LONG_MAX + 1 - (*str - '0'))
    //         return((int)LONG_MIN);
    //     i += *str - '0';
    //     str++;
    // }
    // return (i);
}

int ft_atoi(const char *str)
{
    int flag;
    int result;

    flag = 1;

    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r')
        str++;
    if (*str == '-' || *str == '+')
        if (*str == '-')
            flag = -1;
    str++;
    result = ascii_to_int(str, flag);
    return ((int)(flag * result));
}

int main(void)
{
    char *str = "-21474836489";
    printf("%d\n", atoi(str));
    printf("%d\n", ft_atoi(str));
    return 0;
}