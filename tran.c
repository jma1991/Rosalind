#include <cs50.h>
#include <stdio.h>
#include <string.h>

int IsGuanine(char c);
float TransRatio(string s1, string s2);

int main(void)
{
    string s1 = GetString();
    string s2 = GetString();
    float answer = TransRatio(s1, s2);
    printf("%f", answer);
}

int IsGuanine(char c)
{
    if (c == 'A' || c == 'G')
    {
	return 1;
    }
    else
    {
	return 0;
    }
}

float TransRatio(string s1, string s2)
{
    int transitions = 0;
    int transversions = 0;

    for (int i = 0, n = strlen(s1); i < n; i++)
    {
	if (s1[i] != s2[i])
	{
	    if (IsGuanine(s1[i]) ^ IsGuanine(s2[i]))
	    {
		transversions += 1;
	    }
	    else
	    {
		transitions += 1;
	    }
	}
    }

    return (float)transitions/transversions;
}
