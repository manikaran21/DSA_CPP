for i in range(1, 101):
    if i % 3 == 0 and i % 7 == 0:
        print("FizzBuzz")
    elif i % 3 == 0:
        print("Buzz")
    elif i % 7 == 0:
        print("Fizz")
    else:
        print(i)
