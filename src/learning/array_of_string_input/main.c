# include <stdio.h>
# include <string.h>

int main() {
    int rows = 0;
    printf("How Many names do you want to store: ");
    scanf("%d", &rows);
    char names[rows][10] = {0};

    for(int i = 0; i < rows; i++) {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }
    for(int i = 0; i < rows; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}