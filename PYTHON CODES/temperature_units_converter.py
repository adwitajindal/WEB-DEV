# Q 3. Write a Python program to convert temperatures between Celsius and Fahrenheit. The program should ask the user to input the temperature along with the unit (C or F) and then display the converted temperature in the other unit.

# Sample Input 1:
# Enter the temperature: 100
# Enter the unit (C/F): C

# Sample Output 1:

# Converted temperature: 212.0 F

print(" temperature units converter ")

units = input("enter the units in C for celsius and F for fahrenheit: ")
temperature = float(input("enter the temperature: "))

units = units.upper()

if units == "C":
    temp = (temperature * 9 / 5) + 32
    print("{:.1f}".format(temp), "°F")
elif units == "F":
    temp = (temperature - 32) * 5 / 9
    print("{:.1f}".format(temp), "°C")
else:
    print("wrong units or temperature")
