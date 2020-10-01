import math

def theta (c,n) :
    ans = 0
    for i in range(n+1):
        ans += math.pow(c, i)
    return ans

def main():
    c_val = [0.5, 1, 2]
    print("Enter N value below")
    n = int(input())

    for i in c_val:
        th = theta(i, n)
        print("For c: {}, and n: {}, theta is: {}".format(i, n, th))


if __name__ == '__main__' :
    main()