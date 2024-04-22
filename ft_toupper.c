#include <ctype.h>
#include <stdio.h>

// 小文字であれば対応する大文字が返されてそれ以外であればそのまま返される
// 引数はunsigned charかEOFじゃなければならない

int ft_toupper(int c)
{
    if (!(c >= 'a' && c <= 'z'))
    {
        return (c);
    }
    else
    {
        return (c - 32);
    }
}
int main(void)
{
    int c;
    int d;
    c = toupper('a');
    d = ft_toupper('a');
    printf("%c\n", c);
    printf("%c\n", d);
}