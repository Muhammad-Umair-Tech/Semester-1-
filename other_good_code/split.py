def split_me(text, spliting_char):
    words = []
    current_word = ""
    for char in text:
        if char != spliting_char:
            current_word += char
        else:
            words.append(current_word)
            current_word = ""
    if current_word != "": # add the last word if there is one
        words.append(current_word)
    return words

print(split_me("Hello world", " "))