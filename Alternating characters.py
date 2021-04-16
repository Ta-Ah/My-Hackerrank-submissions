t = int(input())
for _ in range(t):
    st = input()
    deletion = 0

    for i in range(len(st)-1):
        if st[i] == st[i+1]:
            deletion = deletion+1

    print(deletion)
