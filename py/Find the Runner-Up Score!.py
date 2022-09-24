if __name__ == '__main__':
    n = int(input())
    arr = list(set(map(int, input().split())))
    largest=max(arr)
    slargest=arr[0]
    for i in range(len(arr)):
        if arr[i]>slargest and arr[i]<largest:
            slargest=arr[i]
    print(slargest)