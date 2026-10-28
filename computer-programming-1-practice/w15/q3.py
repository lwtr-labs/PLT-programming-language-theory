with (open("ex04.txt", "r", encoding="utf-8") as infile,
      open("ex04_new1.txt", "w", encoding="utf-8") as outfile):
    i = 1
    for line in infile:
        print(f"{i:03d}: {line}", file=outfile, end="")
        i += 1