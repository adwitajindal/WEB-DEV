# Q 2. "HealthCheck" clinic wants to provide a BMI (Body Mass Index) calculator for their patients. They also want to classify the BMI into different categories for better health assessment. Write a Python program to calculate the BMI and classify it based on the BMI ranges.

# Your program should implement the following logic:

# BMI Formula: BMI = weight (kg) / (height (m))^2
# If BMI is less than 18.5, classify as "Underweight"
# If BMI is between 18.5 and 24.9 (inclusive), classify as "Normal Weight"
# If BMI is between 25 and 29.9 (inclusive), classify as "Overweight"
# If BMI is 30 or above, classify as "Obese"
# Write a Python program that takes the weight (in kg) and height (in meters) of a patient as input and calculates the BMI and its classification.

print("Health Check Clinic")
unit_weight = input("enter units in kg or g for weight: ")
weight = float(input("enter the weight: "))
unit_weight = unit_weight.lower()
unit_height = input("enter the units in m or cm for height: ")
height = float(input("enter the height: "))
unit_height = unit_height.lower()
if unit_weight == "g":
    weight = (weight) / 1000
    print("{:.2f}".format(weight))
else:
    pass
if unit_height == "cm":
    height = height / 100
    print("{:.2f}".format(height))
else:
    pass
bmi = weight / height**2
print("{:.2f}".format(bmi))
if bmi < 18.5:
    print("underweight")
elif bmi >= 18.5 and bmi < 24.9:
    print("Normal weight")
elif bmi >= 24.9 and bmi <= 29.9:
    print("overweight")
elif bmi >= 30:
    print("obese")
else:
    print("wrong input")
