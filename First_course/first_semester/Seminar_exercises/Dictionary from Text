def create_dict_from_text(text):
    unique_chars = set(text)
    char_dict = {}
    for char in unique_chars:
        remaining_chars = ''.join(c for c in text if c != char)
        char_dict[char] = remaining_chars

    return char_dict

text = "absdsaf"
result = create_dict_from_text(text)

for key, value in result.items():
    print(f"{key}: {value}")
