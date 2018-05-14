a = [87, 16, 24, 26, 12, 48, 36, 17, 100, 5, 24, 50, 38, 40, 13, 53, 16, 51, 11, 90, 55, 55, 94, 92, 46, 6, 92, 52, 14, 54, 77, 101, 28, 65, 67, 70, 87, 90, 98, 58, 69, 5, 6, 36, 16, 96, 5, 43, 55, 100, 72]

b = [0] * len(a)

def countingSort(A, B, k):
    C = [0] * (k + 1)
    for i in range(0, len(A)):
        C[A[i]] = C[A[i]] + 1
    for i in range(1, k):
        C[i] = C[i] + C[i - 1]
    for i in range(len(A) - 1, -1, -1):
        B[C[A[i]]] = A[i]
        C[A[i]] = C[A[i]] - 1
print(max(a))
countingSort(a, b, max(a))
print b
