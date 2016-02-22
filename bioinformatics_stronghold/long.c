#include <stdio.h>
#include <string.h>

#define SIZE 50
#define LENGTH 1000

int main(void)
{
    FILE* fp = fopen("rosalind_long.txt", "r");

    if (fp == NULL)
    {
	printf("File does not exist.\n");
	return 1;
    }

    char *seqs[SIZE];
    char line[LENGTH];

    for (size_t = 0; i < SIZE; ++i)
    {
	fgets(line, LENGTH, fp);

	if (line != NULL)
	{
	    
	}
	seqs[i] = malloc(strlen(line) + 1);
	strcpy(seqs[i], line);
    }
    
    fclose(fp);
}
