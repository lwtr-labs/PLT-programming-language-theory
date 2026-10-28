rows, cols = 5, 5

metrix = [[(r * cols + c + 1) for c in range(cols)] for r in range(rows)]

print(f"--- 원본 행렬 ({rows}x{cols}) ---")
for row in metrix:
    print(row)
    
transposed = [[metrix[r][c] for r in range(rows)] for c in range(cols)]
print(f"\n--- 전환 후 행렬 ({rows}x{cols}) ---")
for row in transposed:
    print(row)
