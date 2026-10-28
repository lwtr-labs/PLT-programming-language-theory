infilename = input("입력 파일 이름: ")
outfilename = input("출력 파일 이름: ")

infile = open(infilename, "r", encoding="utf-8")
outfile = open(outfilename, "w", encoding="utf-8")

total_sum = 0
count = 0

for line in infile:
    dailySale = int(line)
    total_sum = total_sum + dailySale
    count = count + 1
    
outfile.write("총 매출 = " + str(total_sum) + "\n")
outfile.write("평균 매출 = " + str(total_sum / count))

infile.close()
outfile.close()