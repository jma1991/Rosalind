#include <stdio.h>

#define LENGTH 1000

int main(void)
{
    FILE *fp = fopen("rosalind_rna.txt", "r");

    if (fp == NULL)
    {
	printf("File open failed!");
	return 1;
    }

    char str[LENGTH + 1];
    fgets(str, LENGTH + 1, fp);

    for (int i = 0; i < LENGTH; i++)
    {
	if (str[i] == 'T')
	{
	    str[i] = 'U';
	}
    }

    printf("%s", str);

    fclose(fp);
    return 0;
}
