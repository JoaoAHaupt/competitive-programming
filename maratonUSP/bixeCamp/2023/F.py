n = int(input())
arr = list(map(int, input().split()))

zeus = arr[0]
deuses = sorted(arr[1:], reverse=True)

passos = 0

for i in range(len(deuses)):
    if deuses[i] < zeus:
        break

    diff = deuses[i] - zeus
    k = diff // 2 + 1

    passos += k
    zeus += k

print(passos)
