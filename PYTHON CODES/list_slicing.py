# Q1. Samita is assigned a task by her class teacher to convert a list into 2-d list. Help Samita to complete her task. The task detail is given below:
# Given a list, the task is to split the list at every Nth element and create a 2-d list.
# Sample Input format:
# n-nth element for splitting
# list- single line input list of any length
# Output format:
# 2d list
# Sample Input
# 4
# 4 5 6 7 8 9 1 2 3 4 5 6 6
# Sample Output:

# [['4', '8', '3', '6'], ['5', '9', '4'], ['6', '1', '5'], ['7', '2', '6']]


def list_slice(list1, step):
    return [list1[i::step] for i in range(step)]


required_step = int(input())
List = input()
List=List.split(" ")
print(list_slice(list1=List, step=required_step))
