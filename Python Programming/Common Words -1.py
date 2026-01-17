def count_common_words(s1, s2):
    words1 = set(s1.lower().split())
    words2 = set(s2.lower().split())
    common_words = words1.intersection(words2)
    return len(common_words)
s1 = input()
s2 = input()
print(count_common_words(s1, s2))
