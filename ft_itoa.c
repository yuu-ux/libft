/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:41:41 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 14:35:41 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int digits_count(int n)
{
    int count;
    count = 0;

    if (n == 0)
        count++;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}
char *ft_itoa(int n)
{
    int flag;
    int digits_counts;
    char *result;

    flag = 1;
    digits_counts = 0;

    if (n < 0)
        flag = 0;
    digits_counts = digits_count(n);
    if (flag)
    {
        result = (char *)malloc((digits_counts + 1) * sizeof(char));
    }
    else
    {
        result = (char *)malloc((digits_counts + 2) * sizeof(char));
    }
    if (result == NULL)
        return (NULL);
    if (flag)
    {
        result[digits_counts] = '\0';
        while (n != 0)
        {
            result[--digits_counts] = (n % 10) + '0';
            n /= 10;
        }
    }
    else
    {
        result[digits_counts + 1] = '\0';
        result[0] = '-';
        n = -n;
        while (n != 0)
        {
            printf("%d\n", n % 10);
            result[digits_counts--] = (n % 10) + '0';
            n /= 10;
        }
    }
    return (result);
}

int main(void)
{
    int n;
    n = -18729;
    printf("%s\n", ft_itoa(n));
    return 0;
}