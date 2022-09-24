def print_formatted(number):
    # your code goes here
    n=number
    for i in range(n):
        octa,hexa,bina=int(oct(i)[2:]),int(hex(i)[2:],16),int(bin(i)[2:])
        print("{:6d}".format(i)+"{:6d}".format(octa)+"{:6d}".format(hexa)+"{:6d}".format(bina))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
