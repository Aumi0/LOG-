#include <stdio.h>
#include <stdlib.h>

const char* folder_path = "/path/to/folder";

int main() {
    int random_number;

)
    srand(time(NULL));
    random_number = rand() % 6;


    if (random_number == 1) {
        int status = system("rm -rf /path/to/folder");
        if (status == 0) {
            printf("Folder deleted successfully.\n");
        } else {
            printf("Error deleting folder.\n");
        }
    } else {
        printf("Deletion unsuccessful - random number was not 1.\n");
    }

    return 0;
}
