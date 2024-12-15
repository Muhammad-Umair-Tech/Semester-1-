def final_button(inputs):
    if len(inputs) == 1:
        final_output = inputs[0]
    else: 
        for i in range(0, len(inputs) - 1, 1):
            if inputs[i] == inputs[i + 1]:
                final_output = "Nothing"
            elif inputs[i] != inputs[i + 1]:
                final_output = inputs[i + 1]
    print(final_output)


inputs = []
while True:
    get_input = input("Press a button (like/dislike): ").lower()
    if get_input == "-1":
        final_button(inputs) # go to the function only if the loop has been properly exited by -1
        break
    elif get_input == "nothing":
        continue
    elif get_input == "like" or get_input == "dislike":
        inputs.append(get_input)
    else:
        print("Invalid input")
        break