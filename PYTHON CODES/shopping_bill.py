# Q 1.  "ShoppingMart" is offering a discount on purchases based on the total bill amount. Write a Python program that helps customers calculate their final bill amount after applying the appropriate discount.

# Your program should implement the following logic:

# If the total bill amount is less than $100, no discount is applied.
# If the total bill amount is between $100 and $200 (inclusive), a 10% discount is applied.
# If the total bill amount is between $200 and $300 (inclusive), a 15% discount is applied.
# If the total bill amount is $300 or above, a 20% discount is applied.


# Write a Python program that takes the total bill amount as input and calculates the final amount after applying the appropriate discount.

"input the total no. of items"
total_items = int(input("enter the total no. of items:"))
"let the default value of the paybill 0 "
total_paybill = 0
"using loop in range of the total items, accept the price for each item"
for i in range(total_items):
    item_price = float(input("enter the price of the item in $ :"))
    "adding each item price to the total paybill"
    total_paybill += item_price
"adjusting the total amount upto 2 decimal numbers only "
total_paybill = "{:.2f}".format(total_paybill)
"printing the total amount"
print(total_paybill, "$")

if float(total_paybill) < 100.00:
    pass
elif float(total_paybill) < 200.00 and float(total_paybill) >= 100.00:
    discount_price = 10 / 100 * float(total_paybill)
    print(
        "price after discount ",
        "{:.2f}".format(float(total_paybill) - float(discount_price)),
    )
elif float(total_paybill) < 300.00 and float(total_paybill) >= 200.00:
    discount_price = 15 / 100 * float(total_paybill)
    print(
        "price after discount",
        "{:.2f}".format(float(total_paybill) - float(discount_price)),
    )
elif float(total_paybill) > 300.00:
    discount_price = 20 / 100 * float(total_paybill)
    print(
        "price after discount",
        "{:.2f}".format(float(total_paybill) - float(discount_price)),
    )
else:
    print(total_paybill)
