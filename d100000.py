n = int(input())
s = ""
for i in range(0, n):
    t = int(input())
    dices = [int(s) for s in input().split(" ")]
    result = f"Case #{i+1}: "
    if t == 1:
        result += "1"
    else :
        dices = sorted(dices)
        start = 1
        count = 0
        for d in dices:
            if d >= start:
                count += 1
                start += 1
        result += f"{count}"
    print(result_string)
