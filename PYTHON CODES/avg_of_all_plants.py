# Ms. Gabriel Williams is a botany professor at District College. One day, she asked her student Mickey to compute the average of all the plants with distinct heights in her greenhouse.
# Formula used:
# Average = Sum of Distinct Heights / Total Number of Distinct Heights
# Input Format
# The first line contains the integer, N, the total number of plants.
# The second line contains the N space separated heights of the plants.
# Constraints
# 0 < N <= 100
# Output Format
# Output the average height value on a single line.
# Sample Input
# 10
# 161 182 161 154 176 170 167 171 170 174
# Sample Output
# 169

total_number = int(input("enter the total number: "))
height = input()
heights = [int(j) for j in height.split()]
required_heights = set(heights)
avg_height = sum(required_heights) // len(required_heights)
print(avg_height)