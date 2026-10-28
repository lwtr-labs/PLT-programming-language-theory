# 사용자 지정 범위 합 구하기

def get_sum(start, end):
    sum = 0
    for i in range(start, end+1):
        sum += i
    return sum

start = int(input("시작 값을 입력: "))
end = int(input("마지막 값을 입력: "))

print(get_sum(start, end))