# cook your dish here
def solve():
    n = int(input())
    v = list(map(int, input().split()))

    zeros = v.count(0)
    ones = v.count(1)

    print(min(ones, zeros))

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
