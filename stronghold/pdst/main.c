#include <stdio.h>

int main(void)
{
    int n = 10;
    float matrix[n][n];
}

int distance(char* s1, char* s2)
{
    int i;
    int d;

    for (i = 0, i < n; ++i)
    {
	if (s1[i] != s2[i])
	{
	    d++;
	}
    }

    return d;
}

