#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "kseq.h"
KSEQ_INIT(FILE*, read)
int main(void)
{
    FILE* fp = fopen("rosalind_gc.txt", "r");
    kseq_t *ks = kseq_init(fileno(fp));
    while (kseq_read(ks) >= 0)
    {
	printf("%s\t%s\n", ks->name.s, ks->seq.s);
    }
    kseq_destroy(ks);
    fclose(fp);
    return 0;
}
