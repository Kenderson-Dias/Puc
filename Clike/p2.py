def main():
    a, b = map(int, input().split())

    s = ""
    for i in range(a, b + 1):
        s += str(i)

    print(s + s[::-1])

if __name__ == "__main__":
    main()
