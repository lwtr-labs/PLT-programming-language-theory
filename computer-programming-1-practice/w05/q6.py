user_list =['kim', 'hong', 'park', 'choi']

name = input('아이디: ')
if name in user_list:
    password = input('패스워드: ')
    if password == '12345678':
        print('환영합니다.')
    else:
        print('잘못된 패스워드입니다. ')
else:
    print('알 수 없는 사용자입니다!')