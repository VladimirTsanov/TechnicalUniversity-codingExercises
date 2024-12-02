def ceaser_cipher(text, number):
    list_with_text_symbols = []
    for letter in text:
        list_with_text_symbols.append(letter)
    for let in list_with_text_symbols:
        if let == " " or let == ", " or let== ".":
            pass
        else:
            letter_index = ord(let)
            letter_index += number
            if let.lower():
                if 97 <= letter_index <= 122:
                    list_with_text_symbols[list_with_text_symbols.index(let)] = chr(letter_index)
                else:
                    letter_index = 96 + (number - (122 - ord(let)))
                    list_with_text_symbols[list_with_text_symbols.index(let)] = chr(letter_index)
            elif let.upper():
                if 65 <= letter_index <= 190:
                    list_with_text_symbols[list_with_text_symbols.index(let)] = chr(letter_index)
                else:
                    letter_index = 64 + (number - (190 - ord(let)))
                    list_with_text_symbols[list_with_text_symbols.index(let)] = chr(letter_index)

    result = ''.join(list_with_text_symbols)
    print(result)
ceaser_cipher("ZZZZZ", 6)
