/**
 * dna.c
 *
 * James M. Ashmore
 * s1437643@sms.ed.ac.uk
 *
 * Counts DNA nucleotides.
 *
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

void CountNucleotides(string name);


int main(void)
{
    printf("Enter a DNA sequence: ");
    string s = GetString();
    CountNucleotides(s);
}

/**
 * Counts DNA nucleotides.
 */
void CountNucleotides(string s)
{
    int aCount = 0;
    int cCount = 0;
    int gCount = 0;
    int tCount = 0;
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        switch(s[i])
        {
            case 'A':
	        aCount++;
                break;
            case 'C':
	        cCount++;
	        break;
            case 'G':
	        gCount++;
	        break;
            case 'T':
	        tCount++;
	        break;
            default:
                break;
         }
    }

    printf("%i %i %i %i", aCount, cCount, gCount, tCount);
}
