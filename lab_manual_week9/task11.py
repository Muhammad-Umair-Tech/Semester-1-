def remove_vowels(line):
    vowels_removed = ""
    for letter in line:
        if letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u' or letter == 'A' or letter == 'E' or letter == 'I' or letter == 'O' or letter == 'U':
            continue
        vowels_removed += letter
    return vowels_removed


line = input("Enter a string: ")
print(remove_vowels(line))