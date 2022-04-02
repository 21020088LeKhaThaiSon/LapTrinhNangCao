void reverse(char *s) {
    for (int i = 0; i < strlen(s)/2; i++) {
        char k = s[strlen(s) - i - 1];
        s[strlen(s) - i - 1] = s[i] ;
        s[i] = k;
    }
}
