import os

def check(string):
    ban_list = {'{','}','"', "'", '(', ')'}
    for c in string:
        for ch in ban_list:
            if(c == ch):
                #print(c)
                return ""
    return string

for i in range(30000):
    if(i == 15000):
        print("FLAG{0rder_1n_Ch4Os}")
    text = str(os.urandom(10))[2:][:-1]
    print(text, end="")