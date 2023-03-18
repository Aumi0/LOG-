#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char folder_path[100];

    while (1) {
        printf("Enter the path of the folder to delete (or type 'q' to quit): ");
        scanf("%s", folder_path);

        if (strcmp(folder_path, "q") == 0) {
            break;
        }

        int random_number;

        srand(time(NULL));
        random_number = rand() % 6;

        if (random_number == 1) {
            char command[100];
            sprintf(command, "rm -rf %s", folder_path);
            int status = system(command);
            if (status == 0) {
                printf("Folder deleted successfully.\n");
            } else {
                printf("Error deleting folder.\n");
            }
        } else {
            printf("Deletion unsuccessful - random number was not 1.\n");
        }
    }

    return 0;
}
