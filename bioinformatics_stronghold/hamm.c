#include <cs50.h>
#include <stdio.h>
#include <string.h>

int HammingDistance(string s, string t);

int main(void)
{
    string s = GetString();
    string t = GetString();
    printf("%i", HammingDistance(s, t));
}

int HammingDistance(string s, string t)
{
    int d = 0;
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
	if (s[i] != t[i])
	{
	    d++;
	}
    }

    return d;
}
