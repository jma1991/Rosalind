#include <stdio.h>
#include <stdlib.h>


/*
 *
 *
 */
int* CountNucleotides(char* seq)
{
    int* counts = malloc(4 * sizeof(int));
    if (counts == NULL)
    {
        return NULL;
    }

    do
    {
        switch (*seq)
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
	}
    } while (*seq++);

    return counts;
}

int main(void)
{
    char* seq = "AGCTTT";
    int* counts = CountNucleotides(seq);
    printf("%i %i %i %i", counts[0], counts[1], counts[2], counts[3]);
    return 0;
}
