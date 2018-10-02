amount = 0

for i in range(10000000, 100000000):
    if i % 18 == 0:
        digits_right = True
        for c in str(i):
            if c not in list('123'):
                digits_right = False
        if digits_right:
            amount += 1

print(amount)
