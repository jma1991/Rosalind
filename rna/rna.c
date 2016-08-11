#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* transcribe(char* dna)
{
    // Allocate memory
    char* rna = malloc((strlen(dna) + 1) * sizeof(char));

    // Check allocation
    if (rna == NULL) return NULL;

    // Copy string
    strcpy(rna, dna);

    // Transcribe string
    do
    {
        switch (*rna)
	{
	    case 'A':
                *rna = 'T';
                break;
            case 'C':
                *rna = 'G';
                break;
            case 'G':
                *rna = 'C';
                break;
            case 'T':
                *rna = 'A';
                break;
        }
    } while (*rna++);

    // Return string
    return rna;
}

int main(int argc, char *argv[])
{
    char* seq0 = "GATAGCTCGTAG";
    char* seq1 = transcribe(seq0);
    printf("%s", seq1);
    return 0;
}
