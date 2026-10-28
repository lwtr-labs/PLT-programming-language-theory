def update_scores(values, amount, mode="add"):
    for i in range(len(values)):
        if mode == "add":
            values[i] += amount
        elif mode == "sub":
            values[i] -= amount
            
        values[i] = max(0, min(100, values[i]))
        
scores = [10, 30, 50, 90, 100]

update_scores(scores, 5, "add")
print("+5 결과:", scores)
update_scores(scores, 5, "sub")
print("-5 결과:", scores)