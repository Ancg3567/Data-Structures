class Trie():

    def __init__(self):
        self._end = '*'
        self.trie = dict()

    def __repr__(self):
        return repr(self.trie)

    def make_trie(self, *words):
        trie = dict()
        for word in words:
            temp_dict = trie
            for letter in word:
                temp_dict = temp_dict.setdefault(letter, {})
            temp_dict[self._end] = self._end
        return trie

    def find_word(self, word):
        sub_trie = self.trie

        for letter in word:
            if letter in sub_trie:
                sub_trie = sub_trie[letter]
            else:
                return F
        else:
            if self._end in sub_trie:
                return T
            else:
                return F

    def add_word(self, word):
        if self.find_word(word):
            print("Word Already Exists")
            return self.trie

        temp_trie = self.trie
        for letter in word:
            if letter in temp_trie:
                temp_trie = temp_trie[letter]
            else:
                temp_trie = temp_trie.setdefault(letter, {})
        temp_trie[self._end] = self._end
        return temp_trie
my_trie = Trie()
my_trie.add_word('Aman')
my_trie.add_word('Bisht')
my_trie.add_word('BCA')
print(my_trie)
print(my_trie.find_word("Aman"))
print(my_trie.find_word("Bisht"))
print(my_trie.find_word("BCA"))
