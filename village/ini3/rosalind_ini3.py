#/usr/bin/env python3
with open('dataset.txt') as handle:
    string, indices = [line.strip() for line in handle]    
    a, b, c, d = map(int, indices.split())
    print(string[a:b + 1], string[c:d + 1], sep=" ")
