try:
    with open('phone.txt', 'r', encoding='utf-8') as file:
        content = file.read()
        
except FileNotFoundError:
    print("파일을 찾을 수 없습니다.")
except OSError:
    print("파일을 읽는 중에 오류가 발생했습니다.")
else:
    print(content)
    print("파일 읽기 성공!")
finally:
    print("파일 처리 완료")