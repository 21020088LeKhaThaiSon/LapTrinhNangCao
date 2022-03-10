string pigLatin(string word) {
    char first;
    if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u') {
        word += "way";
    } else {
        first = word[0];
        for (int i = 1; i < word.length(); i++) {
            word[i - 1] = word[i];
        }
        word[word.length() - 1] = first;
        word += "ay";
    }
    return word;
}