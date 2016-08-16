#include <stdio.h>

int fibonacci(int n);

int main(void)
{
    int n = 23;
    printf("%i", fibonacci(n));
}

int fibonacci(int n)
{
    if (n > 1)
    {
	return fibonacci(n - 1) + fibonacci(n - 2);
    }
    
    if (n == 1)
    {
        return 1;
    }

    if (n == 0)    
    {
	return 0;
    }
}
