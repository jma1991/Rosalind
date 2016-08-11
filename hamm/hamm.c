#include <stdio.h>
#include <string.h>

int hamming(char* str1, char* str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int min = len1 < len2 ? len1 : len2;
    int dist = 0;

    for (int i = 0; i < min; ++i)
    {
        if (str1[i] == str2[i])
        {
            ++dist;
        }
    }

    return dist;
}

int main(int argc, char *argv[])
{
    char* seq0 = "GTCGCTTAGCTG"; 
    char* seq1 = "TTAGCCTGGTGC";
    int dist = hamming(seq0, seq1);
    printf("%i", dist);
    return 0;
}
