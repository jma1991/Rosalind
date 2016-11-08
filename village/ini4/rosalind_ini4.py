#!/usr/bin/env python3
with open('rosalind_ini4.txt') as handle:
    contents = handle.read()
    a, b = map(int, contents.split())
    if a % 2 == 1:
        total = sum(range(a, b, 2))
    else:        
        total = sum(range(a + 1, b, 2))
    print(total)
