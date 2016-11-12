#include <stdio.h>
#include <stdlib.h>

#define BUFFER 1000

FILE* open_file(char *fn);
int* count_bases(char *dna);

int main(void)
{
  FILE *fp = open_file("rosalind_dna.txt");
  char str[BUFFER + 1];
  fgets(str, BUFFER + 1, fp);
  int *cnts = count_bases(str);
  printf("%i %i %i %i", cnts[0], cnts[1], cnts[2], cnts[3]);
  free(cnts);
  fclose(fp);
  return 0;
}

FILE* open_file(char *fn)
{
    FILE *fp = fopen(fn, "r");

    if (fp == NULL)
    {
	perror("File open failed!");
    }

    return fp;
}

int* count_bases(char *dna)
{
    int *counts = (int *) malloc(4 * sizeof(int));

    if (counts == NULL)
    {
	perror("Memory allocation failed!");
    }

    for (int i = 0; i < 4; i++)
    {
	counts[i] = 0;
    }
    
    for (int i = 0; i < BUFFER; i++)
    {
	switch (dna[i])
	{
	case 'A':
	    counts[0] += 1;
	    break;
	case 'C':
	    counts[1] += 1;
	    break;
	case 'G':
	    counts[2] += 1;
	    break;
	case 'T':
	    counts[3] += 1;
	    break;
	default:
	    break;
	}
    }

    return counts;
}
