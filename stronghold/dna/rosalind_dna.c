#include <stdio.h>

#define MAXLEN 1000

int main()
{
  char string[MAXLEN + 1] = NULL;
  
  int adenineCount = 0;
  int cytosineCount = 0;
  int guanineCount = 0;
  int thymineCount = 0;
  
  switch (symbol)
  {
    case 'A':
      adenineCount += 1;
    case 'C':
      cytosineCount += 1;
    case 'G':
      guanineCount += 1;
    case 'T':
      thymineCount += 1;
  }

  


  printf("%d %d %d %d", adenineCount, cytosineCount, guanineCount, thymineCount);
  
}
