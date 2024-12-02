print("Dictionary operation")
text_input = input("Input text: ")
split_text = set(text_input)
letters_list = []
text_dict = {}

for letter in text_input:
    letters_list.append(letter)

for i in split_text:
    text_dict[i] = letters_list.count(i)
print(text_dict)
