class Cart:
    def __init__(self, total, count):
        self.total = total
        self.count = count
    def __add__(self, other):
        return Cart(self.total + other.total, self.count + other.count)
    def __sub__(self, other):
        return Cart(self.total - other.total, self.count - other.count)
    def __str__(self):
        return f"총 금액: {self.total}원, 총 수량: {self.count}개 (평균 단가: {self.get_unit_price()}원)"
    def get_unit_price(self):
        if self.count == 0:
            return 0
        else:
            return self.total // self.count
        
cart_item1 = Cart(30000, 2)
cart_item2 = Cart(30000, 1)

total_cart = cart_item1 + cart_item2
refund_cart = cart_item1 - Cart(15000, 1)
print(total_cart)
print(refund_cart)