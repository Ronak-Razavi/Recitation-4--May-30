#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    int data;

    file = fopen("D:\\CS-5008\\data.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    while (fscanf(file, "%d", &data) != EOF) {
        printf("%d\n", data);
    }

    fclose(file);
    return 0;
}
