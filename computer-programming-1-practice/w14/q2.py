class BankAccount:
    def __init__(self):
        self.__balance = 0
    def deposit(self, amount):
        self.__balance += amount
        print(f"통장에 {amount}원이 입금되었음 (잔액: {self.__balance}원)")
        return self.__balance
    def withdraw(self, amount):
        if self.__balance >= amount:
            self.__balance -= amount
            print(f"통장에서 {amount}원이 출금되었음 (잔액: {self.__balance}원)")
        else:
            print(f"잔액 부족! 출금 실패 (현재 잔액: {self.__balance}원)")
        return self.__balance
    def get_balance(self):
        print(f"현재 잔액: {self.__balance}원")
    
a = BankAccount()
a.deposit(100)
a.withdraw(10)
a.get_balance()