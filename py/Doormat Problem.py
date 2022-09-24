n,m=input().strip().split()
background="-"
text="WELCOME"

counter=-1
for i in range(int(n)):
    design=".|."
    if i==int(int(n)/2):
            print(text.center(int(m),background))
    if i<int(int(n)/2):
            counter=counter+2
            design=design*counter
            print(design.center(int(m),background))
    if i>int(int(n)/2):
            design=design*counter
            print(design.center(int(m),background))
            counter=counter-2
        

