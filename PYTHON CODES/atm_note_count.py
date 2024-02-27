# user input = total amount
# print no. of notes of 10
# print no. of notes of 50
# print no. of notes of 100

# Get total amount from the user
total_amount = int(input("Enter the total amount: "))
# Initialize variables to count the number of notes
notes_100 = 0
notes_50 = 0
notes_10 = 0
# Calculate the number of 100 notes
notes_100 = total_amount // 100
remaining_amount = total_amount % 100

# Calculate the number of 50 notes
notes_50 = remaining_amount // 50
remaining_amount %= 50

# Calculate the number of 10 notes
notes_10 = remaining_amount // 10

print("Number of 100 notes: ", notes_100)
print("Number of 50 notes: ", notes_50)
print("Number of 10 notes: ", notes_10)
