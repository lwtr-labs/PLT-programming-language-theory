def simple_cal(expression):
    parts = expression.split()
    
    num1 = float(parts[0])
    op = parts[1]
    num2 = float(parts[2])
    
    if op == "+":
        return num1 + num2
    elif op == "-":
        return num1 - num2
    elif op == "*":
        return num1 * num2
    elif op == "%":
        return num1 % num2
    elif op == "/":
        return num1 / num2 if num2 != 0 else "0으로 나눌 수 없음"
    else:
        return "잘못된 연산자"
    
exp = input("수식을 입력하세요 (예: 10 + 20): ")
result = simple_cal(exp)

print(f"결과: {result}")