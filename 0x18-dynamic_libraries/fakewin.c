int fake() {
    int luck[] = {8, 8, 7, 9, 23, 74};
    static int i = 0;
    i++;
    return luck[i];
}
