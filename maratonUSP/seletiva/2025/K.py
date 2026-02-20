n = int(input())

a, b = map(int, input().split())
ruim = set(map(int, input().split()))

for passo in range(1, n + 1):
    linha = list(map(int, input().split()))
    m = linha[0]
    ingredientes = linha[1:]

    removidos = 0

    for ing in ingredientes:
        if ing in ruim:
            removidos += 1

    if removidos > m / 3:
        print(passo)
        break
else:
    print(-1)
