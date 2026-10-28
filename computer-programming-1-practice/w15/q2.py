def parse_file(path):
    spaces = 0
    tabs = 0
    
    with open(path, "r", encoding="utf-8") as infile:
        for line in infile:
            clean_line = line.rstrip()
            spaces += clean_line.count(' ')
            tabs += clean_line.count('\t')
    return spaces, tabs

filename = input("파일 이름을 입력하시오: ")
spaces, tabs = parse_file(filename)
print(f"스페이스 수 = {spaces}, 탭 수 = {tabs}")