#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    float table[26] = {71.03711,
		       0,
		       103.00919,
		       115.02694,
		       129.04259,
		       147.06841,
		       57.02146,
		       137.05891,
		       113.08406,
		       0,
		       128.09496,
		       113.08406,
		       131.04049,
		       114.04293,
		       0,
		       97.05276,
		       128.05858,
		       156.10111,
		       87.03203,
		       101.04768,
		       0,
		       99.06841,
		       186.07931,
		       0,
		       163.06333,
		       0};

    for (int i = 0, n = strlen(p); i < n; i++)
    {
	printf("%c --> %f\n", p[i], table[(int)p[i] - 65]);
    }

}
