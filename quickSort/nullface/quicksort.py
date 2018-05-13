a = [14, 326, 965, 214, 723, 461, 329, 764, 813, 681, 406, 552, 257, 867, 756, 689, 382, 56, 532, 351, 558, 528, 621, 745, 298, 884, 67, 274, 271, 837, 510, 795, 657, 734, 109, 880, 720, 243, 462, 518, 570, 85, 921, 308, 314, 464, 306, 312, 694, 563, 294, 784, 554, 998, 201, 235, 190, 787, 970, 986, 759, 684, 887, 132, 611, 958, 264, 409, 978, 86, 252, 715, 714, 755, 113, 239, 639, 182, 25, 224, 63, 569, 730, 840, 398, 346, 22, 122, 953, 666, 338, 629, 658, 736, 337, 868, 24, 449, 753, 195]

b = [4,3,2,1]

def partition(arr, p, r):
    x = arr[r] # 4
    i = p - 1 # -1
    for j in range(p, r): # 4 1
        if arr[j] <= x:
            i = i + 1 # 1,
            tmp = arr[i] # 3,
            arr[i] = arr[j]
            arr[j] = tmp
    print b
    tmp = arr[i + 1]
    arr[i + 1] = arr[r]
    arr[r] = tmp
    print b
    print i + 1
    return i + 1


def quickSort(arr, p, r):
    if p < r:
        q = partition(arr, p, r)
        quickSort(arr, p, q - 1)
        quickSort(arr, q + 1, r)

quickSort(b, 0, len(b) - 1)
print b
#quickSort(a, 1, len(a) - 1)
#print a
