def power(base, exponent):
    a=base
    for i in range(exponent-1):
        base=base*a
    return base

print(power(2, 3))  