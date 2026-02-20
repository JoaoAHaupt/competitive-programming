n, h = map(int, input().split())
arr = list(map(int, input().split()))

resp = "SIM"

for i in arr:
    if h >= i:
        h += i
    else:
        resp = "NAO"
        break

print(resp)
