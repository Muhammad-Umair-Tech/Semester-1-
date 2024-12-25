def jazzify(chords):
    for index in range(len(chords)):
        chord = chords[index]
        if chord[-1] == "7":
            continue
        else:
            chord += "7"
            chords[index] = chord
    return chords


chords = []
chord = ""
while True:
    chord = input("Enter a chord (or -1 to exit): ")
    if chord != "-1":
        chords.append(chord)
    else:
        break
print(jazzify(chords))