n=int(input())
a = list(map(int, input().split()))
for i in range(n - 1):
    result = a[i] * a[i + 1]
    if i == n - 2:
        print(result, end="")
    else:
        print(result, end=" ")
