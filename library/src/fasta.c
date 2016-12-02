/**
 * FASTA parsing library for C
 * James Ashmore <jma1991@icloud.com>
 */

#include <stdio.h>
#include <stdlib.h>

#include "fasta.h"

/**
 * Reads a file pointer
 *
 *
 */
void get_fasta(FILE *fp, FASTA *rec)
{
    char ch = fgetc(fp);

    if (ch == '>')
    {
	fgets
    }
    else
    {

    }

    return rec;
}
