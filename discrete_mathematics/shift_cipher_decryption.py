# ord('character') converts a character to its unicode/ascii
# chr converts a unicode/ascii into character

def decrypt(num, shift):
    decrypted_letter = ""
    if num == -1:
        decrypted_letter = " " # spaces should be returned unchanged
    else:
        decrypted_letter = chr((num - shift) % 26 + ord('A')) # + ord('A') converts the answer of (num - shift) % 26 in ascii which is then converted to a character 
    return decrypted_letter


text = input("Enter the encrypted message: ").upper()
decrypted_text = ""
num_text = []
for char in text: # converting text into numbers in the range 1 to 26 e.g. A > 1, B > 2 etc.
    if char == " ": # handling spaces
        num_text.append(-1)
    else:
        num_text.append(ord(char) - ord('A')) # - ord('A') converts the ascii into numbers in the range 1 to 26
for shift in range(1, 27):
    for num in num_text:
        decrypted_text += decrypt(num, shift) # building the decrypted message
    print(shift, ": ", decrypted_text) # showing the decrypted message with the shift applied
    decrypted_text = "" # emptying the variable so it can store a new decryption