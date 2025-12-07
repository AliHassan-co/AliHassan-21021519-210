marks = []
for i in range(5):
    marks.append(float(input(f"Subject {i+1}: ")))
print("Total =", sum(marks))
print("Average =", sum(marks) / 5)