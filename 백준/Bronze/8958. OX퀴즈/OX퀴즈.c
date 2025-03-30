int main() {
    char string[80] = "";
    int n, sum, cont;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        sum = 0, cont = 0;
        scanf("%s", string);
        
        for (int j = 0; string[j] != '\0'; j++) {
            if (string[j] == 'O') {
                ++cont;
                sum += cont;
            }
            else if (string[j] == 'X') cont = 0;
        }
        
        printf("%d\n", sum);
    }
}