from sys import stdin, stdout

while True:
    inp = stdin.readline().lower()
    if len(inp) == 0:
        break
    if "problem" in inp:
        print("yes")
    else:
        print("no")