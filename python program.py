import math

def q1():
    a, b, c = 10, 20, 30
    print(a, b, c)

def q2():
    print("C language is a powerful programming language.")

def q3():
    a = 5
    b = 10
    a, b = b, a
    print("After swapping:", a, b)

def q4():
    year = int(input("Enter years: "))
    print("Months:", year * 12)

def q5():
    a = float(input("Enter first number: "))
    b = float(input("Enter second number: "))
    print("Sum =", a + b)
    print("Product =", a * b)

def q6():
    age = int(input("Enter age in years: "))
    print("Age in months:", age * 12)

def q7():
    roll = input("Roll No: ")
    pf = int(input("Programming Fundamentals: "))
    ic = int(input("Introduction to Computing: "))
    cg = int(input("Computer Graphics: "))
    total = pf + ic + cg
    print("Total =", total)
    print("Average =", total / 3)

def q8():
    f = float(input("Enter temperature in Fahrenheit: "))
    print("Celsius =", (5/9) * (f - 32))

def q9():
    a, b, c, d = map(int, input("Enter four numbers: ").split())
    print("Maximum =", max(a, b, c, d))

def q10():
    miles = 2.5
    print("Kilometers =", miles * 1.609)

def q11():
    a, b = 10, 20
    print("Average =", (a + b) / 2)

def q12():
    PI = 3.14159
    r = float(input("Radius: "))
    h = float(input("Height: "))
    print("Volume =", PI * r * r * h)

def q13():
    PI = 3.14159
    r = float(input("Radius: "))
    print("Area =", PI * r * r)

def q14():
    mm = float(input("Millimeters: "))
    print("Inches =", mm / 25.4)

def q15():
    a = 8
    b = 3
    a, b = b, a
    print("a =", a, "b =", b)

def q16():
    a = b = c = 3
    print("Product =", a * b * c)

def q17():
    num = 15.58971
    integer = int(num)
    fraction = num - integer
    print("Integer:", integer)
    print("Fraction:", fraction)

def q18():
    vi = 5
    t = 10
    a = 2
    s = vi * t + 0.5 * a * (t ** 2)
    print("s =", s)

def q19():
    age = int(input("Enter age: "))
    print("Months:", age * 12)
    print("Days:", age * 365)

def q20():
    print("C:\\Windows>")
    print("'P'\t'A'\t'K'")
    print("\"Pakistan\"")

def q21():
    print("XXXXX\nXXXX\nXXX\nXX\nX")

def q22():
    name = input("Name: ")
    age = input("Age: ")
    height = input("Height: ")
    gender = input("Gender: ")
    print(name, age, height, gender)

def q23():
    PI = 3.14159
    r = float(input("Radius: "))
    print("Area =", PI * r * r)
    print("Circumference =", 2 * PI * r)

def q24():
    marks = []
    for i in range(5):
        marks.append(float(input(f"Subject {i+1}: ")))
    print("Total =", sum(marks))
    print("Average =", sum(marks) / 5)

def q25():
    a = float(input("a: "))
    b = float(input("b: "))
    c = float(input("c: "))
    s = (a + b + c) / 2
    area = math.sqrt(s * (s - a) * (s - b) * (s - c))
    print("Area =", area)

def q26():
    rupees = 12000
    print("Dollars =", rupees / 60)

def q27():
    h = int(input("Hours: "))
    m = int(input("Minutes: "))
    s = int(input("Seconds: "))
    print("Total seconds =", h * 3600 + m * 60 + s)

def q28():
    a = float(input("a: "))
    b = float(input("b: "))
    c = float(input("c: "))
    print("Discriminant =", b * b - 4 * a * c)

def q29():
    n = int(input("Enter n: "))
    if n > 100:
        print("n is greater than 100")
    else:
        print("n is NOT greater than 100")

def q30():
    n = int(input("Enter number: "))
    if n % 2 == 0:
        print("Even")
    else:
        print("Odd")




functions = {
    1: q1, 2: q2, 3: q3, 4: q4, 5: q5, 6: q6, 7: q7, 8: q8, 9: q9, 10: q10,
    11: q11, 12: q12, 13: q13, 14: q14, 15: q15, 16: q16, 17: q17, 18: q18,
    19: q19, 20: q20, 21: q21, 22: q22, 23: q23, 24: q24, 25: q25, 26: q26,
    27: q27, 28: q28, 29: q29, 30: q30
}

while True:
    print("\n=== PROGRAM MENU (1–30) ===")
    for i in range(1, 31):
        print(f"{i}. Program {i}")
    print("0. Exit")

    choice = int(input("\nEnter your choice: "))

    if choice == 0:
        print("Exiting...")
        break
    elif choice in functions:
        functions[choice]()
    else:
        print("Invalid choice! Try again.")