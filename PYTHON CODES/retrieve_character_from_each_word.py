# Raman received a mail from his friend Ravi, for filling the slam book. While filling the answer to a particular question, he inserted special characters at a particular index of every word he entered. Now he wants his friend to retrieve that character from each word and concatenate them in order to know the answer to his question. Write a program to help Ravi in finding out the answer to that question.
# Input Format:
# First Line :  Enter the String        # Input the String
# Second Line: Index Value           # If index value is 2 then it is used to extract 3rd character from each word
# Output Format:
# String concatenation of characters at given index value of each word
# Sample Input:
# keep exploring
# 2
# Sample Output:
# ep


def retrieve_character(string, index_value):
    words = string.split()
    required_character = ""

    for word in words:
        if index_value < len(word):
            required_character += word[index_value]
        else:
            pass
    print(required_character)


a = input("Enter the String ")
b = int(input("Index Value "))
retrieve_character(string=a, index_value=b)
