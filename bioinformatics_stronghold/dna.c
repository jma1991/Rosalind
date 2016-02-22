/**
 * dna.c
 *
 * James M. Ashmore
 * s1437643@sms.ed.ac.uk
 *
 * Counts DNA nucleotides.
 *
 */

#include <stdio.h>
#include <string.h>

#define SIZE 1000

void CountNucleotides(const char *dna);

int main(void)
{
    FILE* fp = fopen("rosalind_dna.txt", "r");

    if (fp == NULL)
    {
	printf("File does not exist.\n");
	return 1;
    }

    char s[SIZE];
    fgets(s, SIZE, fp);
   
    CountNucleotides(s);

    fclose(fp);


}

/**
 * Counts DNA nucleotides.
 */
void CountNucleotides(const char *dna)
{
    size_t counts[4] = {0, 0, 0, 0};
    
    while (*dna != '\0')
    {
	switch (*dna)
	{
	    case 'A':
	        ++counts[0];
	        break;
	    case 'C':
	        ++counts[1];
	        break;
	    case 'G':
	        ++counts[2];
	        break;
	    case 'T':
	        ++counts[3];
		break;
	    default:
	        break;
	}
	++dna;
    }
    
    printf("%i %i %i %i", counts[0], counts[1], counts[2], counts[3]);
}
