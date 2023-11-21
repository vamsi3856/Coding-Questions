import random


def check(a):
    for num in a:
        b=bin(num)
        b=b[2:]
        if b.count('1')%2!=0:
            return "Unhappy"
    return "Happy"



for i in range(1, 11):
    if i <= 9:
        s1 = f"./in0{i}.txt"
        s2 = f"./out0{i}.txt"
    else:
        s1 = f"./in{i}.txt"
        s2 = f"./out{i}.txt"

    with open(s1, 'w') as infile, open(s2, 'w') as outfile:
        t = 1 + random.randint(0, 9)
        infile.write(f"{t}\n")

        for j in range(t):
            n = (random.randint(1, 100))
            infile.write(f"{n}\n")
            a = []
            for i in range(n):
                a.append(random.randint(1,10000))
                infile.write(f"{a[i]} ")
            infile.write(f"\n")
            res = check(a)
            outfile.write(f"{res}\n")


