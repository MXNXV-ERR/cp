if __name__ == '__main__':
    N = int(input())
    li=[]
    for i in range(N):
        query=input().split()
        if query[0]=="insert":
            li.insert(int(query[1]),int(query[2]))
        if query[0]=="print":
            print(li)
        if query[0]=="remove":
            li.remove(int(query[1]))
        if query[0]=="append":
            li.append(int(query[1]))
        if query[0]=="sort":
            li.sort()
        if query[0]=="pop":
            li.pop()
        if query[0]=="reverse":
            li.reverse()
