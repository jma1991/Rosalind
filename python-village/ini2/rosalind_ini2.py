#!/usr/bin/env python3
from math import pow
with open('rosalind_ini2.txt') as handle:
    contents = handle.read()
    a, b = map(int, contents.split())
    hypotenuse = pow(a, 2) + pow(b, 2)
    print(hypotenuse)
