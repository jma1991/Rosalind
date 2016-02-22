#include <stdio.h>
#include <string.h>

void transcribe(char* dna);

int main(void)
{
    FILE* fp = fopen("rosalind_rna.txt", "r");

    if (fp == NULL)
    {
	printf("File does not exist.\n");
	return 1;
    }

    char t[1000];
    fgets(t, 1000, fp);

    transcribe(t);

    fclose(fp);
}

void transcribe(char* dna)
{
    for (int i = 0, n = strlen(dna); i < n; ++i)
    {
	if (dna[i] == 'T')
	{
	    printf("U");
	}
	else
	{
	    printf("%c", dna[i]);
	}
    }
}
