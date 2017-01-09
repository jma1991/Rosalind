#include <stdio.h>
#include <string.h>

#define STLEN 1001

int main(void)
{
    FILE *fp;
    if ((fp = fopen("rosalind_revc.txt", "r")) == NULL)
    {
	printf("File open failed!");
	return 1;
    }

    char buf[STLEN];
    fgets(buf, STLEN, fp);
    buf[strcspn(buf, "\n")] = '\0';

    int c;
    for (int i = 0, j = strlen(buf) - 1; i < j; i++, j--)
    {
	c = buf[i];
	buf[i] = buf[j];
	buf[j] = c;
    }

    printf("%s", buf);
    
    if (fclose(fp) != 0)
    {
	printf("File closed failed!");
	return 1;
    }

    return 0;
}
