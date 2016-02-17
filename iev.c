#include <cs50.h>
#include <stdio.h>

int main(void)
{

  string genotypes[6] = {"AA-AA", "AA-Aa", "AA-aa", "Aa-Aa", "Aa-aa", "aa-aa"};
  int couples[6] = {0, 0, 0, 0, 0, 0};
  for (int i = 0; i < 6; i++)
  {
      printf("Enter number of couples in population possessing %s genotype: ", genotypes[i]);
      couples[i] = GetInt();
  }

  for (int i = 0; i < 6; i++)
  {
    printf("%s: %i\n", genotypes[i], couples[i]);
  }
}


void CalculateOffspring(void)
{

}
