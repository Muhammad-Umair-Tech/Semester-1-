def country_area(area):
    return area / 148940000 * 100


country = input("Enter the name of the country: ")
area = int(input("Enter the area of the country: "))
print(f"{country} is{country_area(area): .2f}% of the world's total land mass.")