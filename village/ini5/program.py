from itertools import islice
with open('dataset.txt') as handle:
    for line in islice(handle, 1, None, 2):
        print(line, sep="")
