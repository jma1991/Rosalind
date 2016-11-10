#!/usr/bin/env python3
from itertools import islice
with open('rosalind_ini5.txt') as handle:
    for line in islice(handle, 1, None, 2):
        print(line.rstrip())
