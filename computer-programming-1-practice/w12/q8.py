dic = {'bags':1, 'books':5, 'bottles':4, 'coins':7,
       'cups':2, 'pens':3}

print(sorted(dic))

print(sorted(dic.values()))

print(sorted(dic, key=dic.get))

print(sorted(dic.items()))

print(sorted(dic.items(), key=lambda x: x[1]))

print(sorted(dic.items(), key=lambda x:x[1], reverse=True))

print(sorted(dic.items(), key=lambda x:x[0]))

print(sorted(dic.items(), key=lambda x: x[0], reverse=True))

print(sorted(dic.items(), key=lambda x: len(x[0])))