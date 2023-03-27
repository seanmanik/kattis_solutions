from sys import stdin, stdout

n = int(stdin.readline().strip())
total = 0
for i in range(n):
    inp = stdin.readline().strip()
    inp = inp.lower()
    if "pink" in inp or "rose" in inp:
        total = total + 1
if total == 0:
    stdout.write("I must watch Star Wars with my daughter")
else:
    stdout.write(str(total))