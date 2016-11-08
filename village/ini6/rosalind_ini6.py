from collections import Counter

with open('dataset.txt') as handle:
    string = handle.read()
    words = string.split()
    counts = Counter(words)
    for word, count in counts.items():
        print(word, count)
