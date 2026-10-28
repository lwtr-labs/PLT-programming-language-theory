def convert_time(seconds):
    hour = seconds // 3600
    minute = (seconds % 3600) // 60
    second = seconds % 60
    return hour, minute, second

total_seconds = int(input("변환할 총 초(sec)를 입력하세요: "))
time_info = convert_time(total_seconds)
print("전체 시간 정보(튜플):", time_info)
print(f"시간: {time_info[0]}시")
print(f"분: {time_info[1]}분")
print(f"초: {time_info[2]}초")