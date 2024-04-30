/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:41:41 by yehara            #+#    #+#             */
/*   Updated: 2024/04/30 19:43:21 by yehara           ###   ########.fr       */
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
    long long num;
    int i;

	i = 0;
    flag = 1;
    digits_counts = 0;

    if (n == 0 || n == +0)
    {
        result = (char *)malloc((1 + 1) * sizeof(char));
        result[0] = (char)(0 + '0');
        result[1] = '\0';
		return (result);
    }
    else if (n == -0)
    {
        n = -n;
        result = (char *)malloc((1 + 1) * sizeof(char));
        result[i] = (char)(0 + '0');
        result[1] = '\0';
		return (result);
    }

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
        num = n;
        result[0] = '-';
        result[digits_counts + 1] = '\0';
        num *= -1;
        while (num != 0)
        {
            result[digits_counts--] = (num % 10) + '0';
            num /= 10;
        }
    }
    return (result);
}

// int main(void)
// {
    // int n;
    // n = -18729;
    // printf("%s\n", ft_itoa(n));
	// /* 1 */ printf("%s\n", ft_itoa(0)); // 0
	// /* 2 */ printf("%s\n", ft_itoa(-0)); // 0
 	// /* 3 */ printf("%s\n", ft_itoa(+0)); // 0
    // /* 14. INT_MIN */ printf("%s\n", ft_itoa(-2147483648)); //"-2147483648"
	// /* 4 */ printf(ft_itoa(1),"1");
	// /* 5 */ printf(ft_itoa(-1),"-1");
	// /* 6 */ printf(ft_itoa(+1),"1");
	// /* 7 */ printf(ft_itoa(7),"7");
	// /* 8 */ printf(ft_itoa(-7),"-7");
	// /* 9 */ printf(ft_itoa(+7),"7");
	// /* 10 */ printf(ft_itoa(42), "42");
	// /* 11 */ printf(ft_itoa(-42), "-42");
	// /* 12 */ printf(ft_itoa(+42), "42");
	// /* 13. INT_MAX */ printf(ft_itoa(2147483647),"2147483647");
	// /* 15. INT_MAX - 1 */ printf(ft_itoa(2147483646), "2147483646");
	// /* 16. INT_MIN + 1 */ printf(ft_itoa(-2147483647), "-2147483647");
//     return 0;
// }
