votes = ["김철수", "이영희", "김철수",
         "박민수", "이영희", "김철수",
         "박민수", "박민수"]

counts = {}

for name in votes:
    if name not in counts:
        counts[name] =  1
    else:
        counts[name] += 1
        
print("--- 투표 결과 ---")

for name, score in counts.items():
    print(f"{name}: {score}표")
    
max_score = max(counts.values())
winners = [name for name, score in counts.items() if score == max_score]

print("\n--- 당선자 ---")
if len(winners) > 1:
    print(f"공동 당선: {', '.join(winners)} ({max_score}표)")
else:
    print(f"당선: {winners[0]} ({max_score}표)")
    