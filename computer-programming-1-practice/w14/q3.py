class Cat:
    def __init__(self, name, age, breed="코숏"):
        self.__name = name
        self.__age = age
        self.breed = breed
    def setName(self, name):
        self.__name = name
    def getName(self):
        return self.__name
    def setAge(self, age):
        if age >= 0:
            self.__age = age
    def getAge(self):
        return self.__age

missy = Cat('Missy', 3, "터키쉬앙고라")
lucky = Cat('Lucky', 5)

print(missy.getName(), missy.getAge(), missy.breed)
print(lucky.getName(), lucky.getAge(), lucky.breed)

