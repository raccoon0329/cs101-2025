#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int id;
    double salary;
} employee_t;

void write_to_file(const char *filename, employee_t *emp, int count) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        perror("無法開啟檔案");
        exit(1);
    }
    fwrite(emp, sizeof(employee_t), count, file);
    fclose(file);
}

void read_from_file(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("無法開啟檔案");
        exit(1);
    }
    employee_t emp;
    while (fread(&emp, sizeof(employee_t), 1, file)) {
        printf("姓名: %s, ID: %d, 薪資: %.2lf\n", emp.name, emp.id, emp.salary);
    }
    fclose(file);
}

int main() {
    employee_t employees[2] = {
        {"Alice", 1001, 50000.0},
        {"Bob", 1002, 55000.0}
    };

    write_to_file("employee.bin", employees, 2);
    read_from_file("employee.bin");

    return 0;
}
