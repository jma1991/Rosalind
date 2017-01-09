#include <stdio.h>

int seqlen(char *seq);
int setlen(char *set[], int n);
int main(void)
{
    char *seqs[4] = {"ATTAGACCTG", "CCTGCCGGAA", "AGACCTGCCG", "GCCGGAATAC"};
    printf("%d\n", setlen(seqs, 4));
    return 0;
}

/*
 * Return length of sequence.
 */
int seqlen(char *seq)
{
    int len = 0;
    for (int i = 0; seq[i] != '\0'; ++i)
    {
	len += 1;
    }
    return len;
}

/*
 * Return total length of a set of strings.
 */
int setlen(char *set[], int n)
{
    int total = 0; 
    for (int i = 0; i < n; i++)
    {
	total += seqlen(set[i]);
    }
    return total;
}

int overlap()
{
    



    
}
