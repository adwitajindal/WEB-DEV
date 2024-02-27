# Kirti has been asked to give a sentence in the form of a string as a function parameter. The task is to print the sentence such that each word in the sentence is reversed.
# Input Format:
# The only line of input contains a string that represents the sentence given by Kirti.
# Output Format:
# The only line of output prints the sentence such that each word in the sentence is reversed.
# Constraints:
# 0 <= N <= 100
# Where N is the length of the input string.
# Sample Input 1:
# Welcome To Chitkara
# Sample Output 1:
# emocleW oT araktihC


def reverse_each_word(string):
    words = string.split(" ")
    new_words = [word[::-1] for word in words]
    print(" ".join(new_words))


sentence = input("")
reverse_each_word(string=sentence)
