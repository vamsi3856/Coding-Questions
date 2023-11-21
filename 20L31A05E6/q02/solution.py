from collections import Counter
import random

input_string = ['dabcdccbacbcddb',
                'dskjfbuwihowoqwoquuuuedewdj',
                'banjwkihbghhwww',
                'jebbrfiueiuiiiiijkqwbbbbbbbbbboqihwhvdkeuhdiwbsbdhwodowidowjbbzbyduqwioojwqiwqndiqwwkkdnvhthjsdgwewuhiowjroiwwjd',
                'hjewbhbejwjkvdhjdfuehuweikeniuehndnsduhdewhio',
                'hjytvetuiojbhhhhhweoieioewiooeoewo',
                'bbgsjuhdgbhdbdhydbchejifbfgrbr',
                'jsvhufewugfiqoidjwoidwjdjwhbhdbwuidhowijdojdonchjdbhfbfbeuihieehfoeifhkjeojqpdjqodjjbcjsdbubruifdhihrhiurfheiuhfihidjwojdwoidoiwhiewhieiufiuewhffiewifheihfbchvdfgreugfuerfuiirevjbdjbvuerfuierfiur',
                'hjfvwejhewbifbjwebfewifejwbfuehwbiifbjewbfuihejjehfefueufbuiefiehfurufiefuierfuherufru',
                'sjdfvhwebuyuuuuuuuuuuuunndcvshhhhhhhvuiwoqwjeoqpo'
                ]
t=-1

def solve(s):
    s = s.lower()
    r=''

    f = Counter(s)
    freq_dict = dict(f)
        
    sorted_dict = dict(sorted(freq_dict.items(), key=lambda item: item[1],reverse=True))

    for i in s:
        first_item = next(iter(sorted_dict.keys()))
        r+=first_item
        sorted_dict[first_item]-=1
        sorted_dict = dict(sorted(sorted_dict.items(), key=lambda item: item[0]))
        sorted_dict = dict(sorted(sorted_dict.items(), key=lambda item: item[1],reverse=True))

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


        