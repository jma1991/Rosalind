#include <stdio.h>
#include <string.h>

void permutations(char *iterable);

int main(void)
{
    FILE *fp = fopen("rosalind_perm.txt", "r");
    if (fp == NULL)
    {
	printf("File open failed!");
	return 1;
    }

    int n;
    fscanf(fp, "%d", &n);

    printf("%d", n);

    if (fclose(fp) != 0)
    {
	printf("File close failed!");
	return 1;
    }
    
    return 0;
}

void permutations(char *iterable)
{
    int n = strlen(iterable);
}
