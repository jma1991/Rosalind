#include <stdio.h>

int binary(int key, int keys[]);

int main(void)
{
    int n = 5;
    int m = 6;
    int array[n] = {10, 20, 30, 40, 50};
    int array[m] = {40, 10, 35, 15, 40, 20};

    for (int i = 0, i < m; ++i)    
    {
	binary(int key, int keys[])
    }
}

int binary(int key, int keys[])
{
    int lower = 1;
    int upper = n;
    bool found = false;

    while (found == false)
    {
	if (upper < lower)
	{
	    return -1;	    
	}
	middle = lower + (upper - lower) / 2;
	if (keys[middle] < key)
	{
	    lower = middle + 1;
	}
	if (keys[middle] > key)
	{
	    upper = middle - 1;
	}
	if (keys[middle] == key)
	{
	    return middle;
	}
    }
}
