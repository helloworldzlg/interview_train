#include <stdio.h>

int mydiv(int divisor, int dividend)
{
    int result = 0;
    if (0 == dividend)
    {        
        printf("dividend can't be 0!");
        return result;
    }
    
    while (divisor >= dividend)
    {
        result++;
        divisor -=  dividend;
    }
    
    return result;
}

int main()
{
    int a = 6;
    int b = 4;
    
    printf("%d\n", mydiv(a, b));
    
    return 0;
}
