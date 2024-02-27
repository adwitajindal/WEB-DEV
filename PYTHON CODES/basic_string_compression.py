# Problem Statement
# Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions

# Example:
# If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

# The string is compressed only when the repeated character count is more than 1.


# Note:
# You are not required to print anything. It has already been taken care of. Just implement the given function.
# Input Format:
# The first and only line of input contains a string without any leading and trailing spaces.


# Output Fomrat:
# The output contains the string after compression printed in single line.


# Constraints :
# 0 <= N <= 10^6

# Where 'N' is the length of the input string.

# Time Limit: 1 sec

# Input 1:
# aaabbccdsa
# Output 1:
# a3b2c2dsa


# Explanation for Sample Output 1:
# In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is repeated 2 times and 'd', 's' and 'a' and occuring 1 time hence no compression for last 3 characters.
def compress_string(string):
    compressed_string = ""
    count = 1
    for i in range(1, len(string)):
        if string[i] == string[i - 1]:
            count += 1
        else:
            compressed_string += string[i - 1] + (str(count) if count > 1 else "")
            count = 1
    compressed_string += string[-1] + (str(count) if count > 1 else "")
    return compressed_string


input_string = input().strip()
result = compress_string(input_string)
print(result)
