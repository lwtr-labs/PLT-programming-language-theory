class Student:
    def __init__(self, name, birth_date):
        self.name = name
        self.__birth_date = birth_date
        
    def set_birth_date(self, new_birth_date):
        if len(new_birth_date) != 6 or not new_birth_date.isdigit():
            print("에러: 생년월일은 반드시 숫자 6자리여야 합니다!")
        else:
            self.__birth_date = new_birth_date
    
    def get_birth_date(self):
        return self.__birth_date
        
chulsoo = Student("철수", "081225")
print(chulsoo.get_birth_date())
chulsoo.set_birth_date("08122")
chulsoo.set_birth_date("08122a")
chulsoo.set_birth_date("090521")
print(chulsoo.get_birth_date())

