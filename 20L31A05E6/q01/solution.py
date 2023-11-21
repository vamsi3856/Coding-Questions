import random

input_string = ['I #h@a1v2e! #go#ld coi&^&ns an&81d s&ilver co(ins)',
                'In m@y wa@#llet, I stumble@d upon a coll#$ection of une#xpected##d trea2sures1 crum#pled rec**eipts from a co@ffee sh@op ren1dez2v3o1us loy!alty cards with various stamps, a4n1d bills of assorted denominations. As I del((ved deeper, I discove1r1ed forg#otten lotte#ry tickets, e#ach bear#$)ing the hope of a num!@erical windfall. Along&&side them w1e1r2e business cards, each en!graved with ph$one numbers and email addresses, prom@@ising connecti##ons yet t!o be made. Amid@st the ta@ngible chaos of numbe@@rs and remna#@nts of daily life, I marvele@#d at the in!advert$ent arithm^etic of my pocketed existence, wh&ere eve##ry item, fro*m coin#s to cards, tol!d a st@ory mark@ed by di@gits and chan@ce enco$unt#ers.',
                'I ha$v1e3 notebooks',
                'She is $beau@tifu$#l and ^He i$s lu@cky',
                'I got91 marks!',
                'The**$re ar5e1 mac#$hines!',
                'I at$e71 chocolate&s',
                'Hello wo@#r!ld!',
                'Im a*2$#1 star cod$er',
                'How $$#are# yo@u?']
t=-1

def solve(s):
    r = ""
    p = 0
    i = 0
    while i < len(s):
        if s[i].isalpha():
            r += s[i]
        elif s[i].isdigit():
            p += int(s[i])
        if p != 0 and s[i] == ' ':
            r += " "
            if p < 10:
                r += str(p)
            else:
                q = str(p)
                r += q
            p = 0
        if p == 0 and s[i] == ' ':
            r += ' '
        i += 1

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


        