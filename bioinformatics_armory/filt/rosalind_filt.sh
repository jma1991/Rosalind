#!/bin/bash
infile=$1
read -r quality percent < $infile
tail -n +2 $infile| fastq_quality_filter -q $quality -p $percent -i /dev/stdin | echo $((`wc -l`/4))
