memo = [0, 1]




while True:
    x = int(input())
    
    if x == -1:
        break

    i = len(memo)
    
    if i-1 > x:
        num_to_str = str(memo[x])
        if num_to_str[-4: 0: 1] == "0000":
            print("0")
        else:
            print(memo[x] % 10000)
    else:
        i -= 1
        while i < x+1:
            memo.append(memo[-2] + memo[-1])
            i += 1
        num_to_str = str(memo[x])
        if num_to_str[-4:0:1] == "0000":
            print("0")
        else:
            print(memo[x] % 10000)


print(memo)