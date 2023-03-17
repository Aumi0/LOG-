#include <stdio.h>
#include <xlsxwriter.h>

int main() {
    // Open a new Excel workbook
    lxw_workbook *workbook = workbook_new("output.xlsx");

    // Add a new worksheet
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, NULL);

    // Prompt for user input
    char input[100];
    printf("Enter data to put in Excel file: ");
    scanf("%s", input);

    // Write the input to cell A1 on the worksheet
    worksheet_write_string(worksheet, 0, 0, input, NULL);

    // Save the workbook and free memory
    workbook_close(workbook);
    return 0;
}
