#include <stdio.h>

int main(void)
{
}


void fib(int n)
{
    if (n == 0)
    {
	return 0;
    }

    int f[n];

    f[0] = 0;
    f[1] = 1;

    for (size_t i = 1; i < n; ++i)
    {
	f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
	
}
