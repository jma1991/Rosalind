#include <stdio.h>

#define SIZE 1000

void ProteinMass(const char *p);

int main(void)
{
    FILE* fp = fopen("rosalind_prtm.txt", "r");

    if (fp == NULL)
    {
	printf("File does not exist.\n");
	return 1;
    }

    char p[SIZE+1];
    fgets(p, SIZE, fp);
    ProteinMass(p);
    fclose(fp);
}

void ProteinMass(const char *p)
{
    float mass = 0;
    float table[26] = {71.037110,  // A
                       0.0000000,  // B
		       103.00919,  // C
		       115.02694,  // D
		       129.04259,  // E
		       147.06841,  // F
		       57.021460,  // G
		       137.05891,  // H
		       113.08406,  // I
		       0.0000000,  // J
		       128.09496,  // K
		       113.08406,  // L
		       131.04049,  // M
		       114.04293,  // N
		       0.0000000,  // O
		       97.052760,  // P
		       128.05858,  // Q
		       156.10111,  // R
		       87.032030,  // S
		       101.04768,  // T
		       0.0000000,  // U
		       99.068410,  // V
		       186.07931,  // W
		       0.0000000,  // X
		       163.06333,  // Y
		       0.0000000}; // Z
    
    while (*p != '\0')
    {
	printf("%c --> %i --> %f\n", *p, *p - 65, table[*p - 65]);
	mass += table[*p - 65];
	p++;
    }

    printf("%f", mass);
}
