import random

input_string = ['126(12[23(12)])',
                '[67(68)(78)]',
                '(78)',
                '[7(12(67[56]8))8]',
                '(56[61(12)1])',
                '1[1(12)7]',
                '(78[12])1',
                '56[78(12)]',
                '12(12)[12]',
                '(71(12))[12(11)]',
                ]
t=-1

def solve(str_input):
    s = []
    r = ""
    r1 = ""

    for c in str_input:
        p = 0
        m = 1

        if not s and c.isdigit():
            r += c
        else:
            if c == ')':
                while s[-1] != '(':
                    delElt = s.pop()
                    p += int(delElt)
                s.pop()
                if p < 10:
                    s.append(str(p))
                else:
                    a = str(p)
                    for i in a:
                        s.append(i)
                p = 0
            elif c == ']':
                while s[-1] != '[':
                    delElt = s.pop()
                    m *= int(delElt)
                s.pop()
                if m < 10:
                    s.append(str(m))
                else:
                    a = str(m)
                    for i in a:
                        s.append(i)
                m = 1
            else:
                s.append(c)

    while s:
        r1 = s.pop() + r1

    r += r1
    r=int(r)

    outfile.write(f"{r}\n")


for i in range(1, 11):
    if i <= 9:
        s1 = f"./in0{i}.txt"
        s2 = f"./out0{i}.txt"
    else:
        s1 = f"./in{i}.txt"
        s2 = f"./out{i}.txt"

    with open(s1, 'w') as infile, open(s2, 'w') as outfile:
        t+=1
        n = len(input_string[t])
        infile.write(f"{n}\n")
        s = input_string[t]
        infile.write(f"{s}\n")
        solve(s)

