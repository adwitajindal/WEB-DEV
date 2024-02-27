# ques1:
for i in range(1, 6):
    for j in range(5, 0, -1):
        if j <= i:
            print(j, end=" ")
        else:
            print(" ", end=" ")
    print()


# ----------------------------------------->
# ques2
lst = [3, 4, 6, 1, 2]
lst[1:2] = [7, 8]
print(lst)


# ----------------------------------------->
# ques3
def fn(x):
    x += [1]


mylist = [1, 2, 3, 4, 7, 87, 83]
fn(mylist)
print(len(mylist))


# ----------------------------------------->
# ques4
def f(i, values=[]):
    values.append(i)
    return values


f(1)
f(2)
v = f(3)
print(v)


# ----------------------------------------->
# ques5
len(mylist)


# ----------------------------------------->
# ques6
L = [10, 20, 30, 40, 50, 60, 70]
print(L[2:-2])


# ----------------------------------------->
# ques7
i = 0
while i < 5:
    print(i)
    i += 5
    if i == 3:
        continue
        break


# ----------------------------------------->
# ques8
func = lambda x: x**5
print(func(2))


# ----------------------------------------->
# ques9
a = [0, 11, 22, 33, 44, 55, 66, 77, 88, 99]
print(a[7:2:-1])


# ----------------------------------------->
# ques10
def main():
    arg = 4
    square(arg)
    print(arg)


def square():
    n *= n


main()
