#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct FASTA
{
    char *header;
    char *sequence;
};

struct Fasta *fasta_create(char *header, char *sequence)
{
    struct Fasta *record = malloc(sizeof(struct Fasta));
    assert(record != NULL);
    record->header = strdup(header);
    record->sequence = strdup(sequence);
    return record;
}

void fasta_destroy(struct Fasta *record)
{
    assert(record != NULL);
    free(record->header);
    free(record->sequence);
    free(record);
}

void fasta_print(struct Fasta *record)
{
    printf("Header: %s\n", record->header);
    printf("Sequence: %s\n", record->sequence);
}


void getfa(FILE *fp)
{
    char ch = fgetc(fp);
    if (ch == ">")
    {
	fgets(str, 100, fp);
    }


	


	

}




int main(void)
{
    struct Fasta *record = Fasta_create("Rosalind_6404", "GTAGCTAGCTAGCTAGCTAGCTACTACAGCGATCAGC");
    printf("Memory location: %p\n", record);
    Fasta_print(record);
    Fasta_destroy(record);


    FASTA record;
    
    while (getfa(fp) != NULL)
    {




	
    }



    return 0;
}



