s = "apple, banana, cherry"
list_data = s.split(", ")

print(list_data)
print(" & ".join(list_data))

s = "  ID_user2026@gmail.com  "

print("|" + s.replace("gmail", "naver") + "|")
print("|" + s.strip() + "|")
print("|" + s.lstrip() + "|")
print("|" + s.rstrip() + "|")
print("|" + s.lower() + "|")
print("|" + s.upper() + "|")


s = "banana shake and banana juice"
print(s.count("a"))
print(s.count("a", 4, 15))
print(s.find("banana"))
print(s.find("banana", 2))
print(s.rfind("banana"))
print(s.rfind("banana", 0, 10))