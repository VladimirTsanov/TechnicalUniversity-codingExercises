int main() {
    int rows = 5;
    char MyChr;
    
    printf("Type a character below: ");
    scanf(" %c", &MyChr);

    for (int i = 1; i <= rows; i++) {  
        for (int j = 1; j <= 10; j++) {
            if (i == 1 || i == rows) { 
                printf("%c", MyChr);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
