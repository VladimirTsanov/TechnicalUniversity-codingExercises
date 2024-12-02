def text_edit_by_numbers(text, *num):
    text_letters = []
    for x in text:
        text_letters.append(x)
    for i in num:
        try:
            print(' '.join(text_letters[i]), end="")
        except IndexError:
            pass
