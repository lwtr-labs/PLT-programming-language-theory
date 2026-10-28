contacts = {'Kim':'01012345678', 'Park':'01012345679', 'Lee':'01012345680'}
print("초기 데이터:", contacts)

emp_d = {}
print("빈 딕셔너리:", emp_d)

print("[key] 조회:", contacts['Kim'])

print("get 조회:",contacts.get('Kim'))

num = contacts.get('Choi', "010144")
print("기본값 조회:",num)

if 'Kim' in contacts:
    print("결과: 키가 있음")

contacts['Choi'] = '01056781234'
print("데이터 추가:", contacts)

new_data = {'Park':'01012347777','Hong':'01012340303'}
contacts.update(new_data)
print("데이터 수정:", contacts)

print("삭제된 값:",contacts.pop('Kim'))

print("최종 상태:", contacts)