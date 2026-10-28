menu = 0
person = []
while menu != 9:
    print("---------- MENU ----------")
    print("1. 연락처 목록 출력")
    print("2. 연락처 추가")
    print("3. 연락처 삭제")
    print("4. 이름 변경")
    print("5. 연락처 검색")
    print("9. 종료")
    menu = int(input("메뉴 선택: "))
    if menu == 1:
        print(person)
    elif menu == 2:
        name = input("이름: ")
        person.append(name)
    elif menu == 3:
        del_name = input("삭제할 이름을 입력하세요: ")
        if del_name in person:
            person.remove(del_name)
        else:
            print("연락처가 존재하지 않습니다.")
    elif menu == 4:
        old_name = input("기존 이름을 입력하세요: ")
        if old_name in person:
            index = person.index(old_name)
            new_name = input("바꿀 이름을 입력하세요: ")
            person[index] = new_name
        else:
            print("연락처가 존재하지 않습니다.")
    elif menu == 5:
        search_name = input("검색할 이름을 입력하세요: ")
        if search_name in person:
            loca = person.index(search_name)
            print(f"{search_name}님은 목록의 {loca + 1}번째에 있습니다.")
        else:
            print("연락처가 존재하지 않습니다.")