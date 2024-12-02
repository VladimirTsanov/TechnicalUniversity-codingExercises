def longest_word(text):
    list_with_words = text.split()
    list2 = sorted(list_with_words, key=len, reverse=True)
    print(f"The longest word is: {list2[0]}")

text1 = "This is a sample"
longest_word(text1)
