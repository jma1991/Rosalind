#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TXTLEN 10

char** kmer(int n, char* str);

int main(void)
{
    FILE *fp = fopen("rosalind_ba3a.txt", "r");
    if (fp == NULL)
    {
	printf("File open failed!");
	return 1;
    }

    int k;
    fscanf(fp, "%d", &k);

    char txt[TXTLEN];
    fscanf(fp, "%9s", txt);
    
    printf("%d %s\n", k, txt);

    char **kmers = kmer(k, txt);

    for (int i = 0; i < (strlen(txt) - k + 1); i++)
    {
	printf("%s\n", kmers[i]);
    }

    for (int i = 0; i < (strlen(txt) - k + 1); i++)
    {
        free(kmers[i]);
    }
    free(kmers);
    
    if (fclose(fp) != 0)
    {
	printf("File close failed!");
    }
    
    return 0;
}

char** kmer(int n, char* str)
{
    // length of string
    int m = strlen(str);
    
    // assign array of char pointers
    char **ptr = malloc((m - n + 1) * sizeof(char*));

    if (ptr == NULL)
    {
	printf("Memory allocation failed!");
	exit(1);
    }
    
    // for each pointer, assign enough memory for kmer
    for (int i = 0; i < (m - n + 1); i++)
    {
	ptr[i] = malloc((m - n + 1) * sizeof(char));
	if (ptr[i] == NULL)
	{
	    printf("Memory allocation failed!");
	    exit(1);
	}
    }

    // get kmer and copy to array
    for (int i = 0, k = m + 1 - n; i < k; i++)
    {
	memcpy(ptr[i], &str[i], n);
	ptr[i][n + 1] = '\0';
    }

    // return pointer to array;
    return ptr;
}
