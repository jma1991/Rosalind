#include <cs50.h>
#include <stdio.h>
#include <string.h>

void Content(string s);

int main(void)
{
    string s = GetString();
    Content(s);
}

void Content(string s)
{
    int i = 0;
    int c = 0;
    
    while (s[i] != '\0')
    {
	if (s[i] == 'C' || s[i] == 'G')
	{
	    c++;
	}
	i++;
    }

    printf("%f", ((float)c/i)*100);
}
