#include <stdio.h>

int main(void)
{
    FILE *fp;
    if ((fp = fopen("rosalind_iprb.txt", "r")) == NULL)
    {
	printf("File open failed!");
	return 1;
    }

    int k, m ,n;
    fscanf(fp, "%d %d %d", &k, &m, &n);

    if (fclose(fp) != 0)
    {
	printf("File close failed!");
    }
    
    return 0;
}
