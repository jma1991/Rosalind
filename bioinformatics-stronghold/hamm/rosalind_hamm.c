#include <stdio.h>
#include <string.h>

#define STRLEN 1001

int main(void)
{
    FILE *fp = fopen("rosalind_hamm.txt", "r");

    if (fp == NULL)
    {
	printf("File open failed!");
	return 1;
    }

    char s[STRLEN];
    char t[STRLEN];

    fgets(s, STRLEN, fp);
    fgets(t, STRLEN, fp);

    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';

    int mismatch = 0;
    for (int i = 0, j = strlen(s); i < j; i++)
    {
	if (s[i] != t[i])
	{
	    mismatch += 1;
	}
    }

    printf("%d", mismatch);
    

    if (fclose(fp) != 0)
    {
	printf("File close failed!");
	return 1;
    }
    
    return 0;
}
