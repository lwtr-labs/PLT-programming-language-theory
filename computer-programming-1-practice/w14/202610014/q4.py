class InstaAccount:
    def __init__(self, username, followers=0, is_private=False):
        self.__username = username
        self.__followers = followers
        self.__is_private = is_private
        
    def setFollowers(self, num): self.__followers = num
    def setPrivate(self, status): self.__is_private = status
    
    def __str__(self):
        status = "공개" if self.__is_private else "비공개"
        return '@%s (팔로워: %d명, %s계정)' % (self.__username, self.__followers, status)
    
user1 = InstaAccount("coding_master", 120, False)
user2 = InstaAccount("coding_starter", 30, True)
user3 = InstaAccount("knu_cse", 500, True)

print(user1)
print(user2)
print(user3)