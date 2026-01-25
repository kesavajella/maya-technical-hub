def count_distinct_characters(s):
    s = ''.join(filter(str.isalpha, s.lower()))
    distinct_characters = set(s)
    return len(distinct_characters)
input_string = input()
print(count_distinct_characters(input_string))
