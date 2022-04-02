void rFilter(char *s) {
    int i = strlen(s) - 1;
    while(s[i] < 65 || s[i] > 90 && s[i] < 97 || s[i] > 122) {
        s[i] = '_';
        i--;
    }
}
