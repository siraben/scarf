#######################
## Name     : scarf.py
## Author   : izder456
## License  : N/A
## Version  : v1.0
## Language : Python
#######################

colours = [input("Enter Charater 1 : "),input("Enter Charater 2 : ")]
colour_length = int(input("Enter desired Character length (Whole Number) : "))
pattern_length = int(input("Enter desired scarf length (Whole Number) : "))
pattern_width = int(input("Enter desired scarf width (Whole Number) : "))

print()
print("Here is your scarf :")
for pos in range(int(pattern_width * pattern_length)):
    print(colours[ int((pos)/colour_length) % len(colours)], end="")
    if (pos % pattern_width) == pattern_width-1:
        print("")