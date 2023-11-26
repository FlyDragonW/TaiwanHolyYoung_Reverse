output = list("W@PHS!4!TT")
v7 = [0] * 10
v7[0] = 8  
v7[1] = 5  
v7[2] = 9  
v7[3] = 1  
v7[4] = 2  
v7[5] = 4  
v7[6] = 3  
v7[7] = 6  
v7[8] = 7  
v7[9] = 0

for i in reversed(range(len(v7))):
    temp = output[i]
    output[i] = output[v7[i]]
    output[v7[i]] = temp

print("".join(output))