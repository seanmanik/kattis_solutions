from sys import stdin, stdout

n = int(stdin.readline().strip())

while n > 0:
    s = stdin.readline().strip()
    if s == "P=NP":
        stdout.write("skipped\n")
    else:
        info = s.split("+")
        stdout.write(str((int(info[0]) + int(info[1]))) + "\n")
    n -= 1