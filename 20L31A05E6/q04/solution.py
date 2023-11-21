import random

def solve(rows,cols,matrix):
    setA = set()
    setB = set()
    for i in range(rows):
        row = matrix[i]

        sumA, sumB = 0, 0
        for j in range(cols):
            if (j + 1) % 2 == 0:
                sumB += row[j]
            else:
                sumA += row[j]

        setA.add(sumA)
        setB.add(sumB)

    common_elements = setA.intersection(setB)
    common_elements = sorted(common_elements)
    convert_into_str_for_output = ''
    for i in common_elements:
        convert_into_str_for_output=convert_into_str_for_output+str(i)+' '

    if common_elements:
        outfile.write(f"{convert_into_str_for_output}\n")
    else:
        outfile.write(f"-1\n")



for i in range(1, 11):
    if i <= 9:
        s1 = f"./in0{i}.txt"
        s2 = f"./out0{i}.txt"
    else:
        s1 = f"./in{i}.txt"
        s2 = f"./out{i}.txt"

    with open(s1, 'w') as infile, open(s2, 'w') as outfile:
        n = 1 + random.randint(0, 9)
        m = 1 + random.randint(0, 9)
        infile.write(f"{n} {m}\n")
        l = []
        for j in range(n):
            row = []
            for i in range(m):
                v = (random.randint(1, 10))
                row.append(v)
                infile.write(f"{v} ")
            l.append(row)
            infile.write(f"\n")
        solve(n,m,l)

