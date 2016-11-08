from math import pow
with open('dataset.txt') as handle:
    contents = handle.read()
    a, b = map(int, contents.split())
    hypotenuse = pow(a, 2) + pow(b, 2)
    print(hypotenuse)
