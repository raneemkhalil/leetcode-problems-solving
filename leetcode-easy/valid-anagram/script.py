from collections import defaultdict


def is_anagram(s: str, t: str) -> bool:
    if len(s) != len(t):
        return False
    count_s_mapping = defaultdict(int)
    count_t_mapping = defaultdict(int)

    for ch in s:
        count_s_mapping[ch] += 1
    for ch in t:
        count_t_mapping[ch] += 1

    for ch, count in count_t_mapping.items():
        if count_s_mapping[ch] != count:
            return False

    return True

if __name__ == '__main__':
    s = "anagram"
    t = "nagaram"
    print(is_anagram(s, t))