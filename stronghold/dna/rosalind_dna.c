#include <stdio.h>

#define MAXLEN 1000

int main()
{
  FILE *file = open_file("rosalind_dna.txt", "r");
  char string[MAXLEN];
  counts = count_nucleotides();
  printf("%d %d %d %d", a_count, c_count, g_count, t_count);
}

FILE* open_file(filename, mode)
{
  FILE* file = open("rosalind_dna.txt", "r")

}


int count_nucleotides(char* string)
{
  int *counts = (int*) malloc(4 * sizeof(int));
  return counts;
}
