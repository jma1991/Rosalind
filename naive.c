#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void Naive(string p, string t);

int main(void)
{
    string t = GetString();
    string p = GetString();
    Naive(p, t);
}

void Naive(string p, string t)
{
    bool match = true;
    
    for (int i = 0, n1 = strlen(t) - strlen(p) + 1; i < n1; i++)
    {
	match = true;
	for (int j = 0, n2 = strlen(p); j < n2; j++)
	{
	    if (t[i+j] != p[j])
	    {
		match = false;
		break;
	    }
	     
	}
	if (match)
	{
	    printf("%i\n", i);
	}
    }
}
