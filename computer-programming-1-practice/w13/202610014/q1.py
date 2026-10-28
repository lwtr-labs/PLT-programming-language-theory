triples = {x: x*x*x for x in range(6)}
print(triples)

scores = {'Kim':70, 'Park':95, 'Lee':85}
top_student = {name: score for name, score in scores.items() if score >= 80}
print(top_student)

result = {name: ('Pass' if score >= 80 else 'Fail') for name, score in scores.items()}
print(result)

