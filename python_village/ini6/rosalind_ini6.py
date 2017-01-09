#!/usr/bin/env python3
from collections import Counter
with open('rosalind_ini6.txt') as handle:
    string = handle.read()
    words = string.split()
    counts = Counter(words)
    for word, count in counts.items():
        print(word, count)
