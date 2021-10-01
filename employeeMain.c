//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c

//gcc employeeMain.c employeeTable.c employeeTwo.c

#include <string.h> 
#include <stdlib.h>
#include "employee.h"
int main(void){
    //defined in employeeSearchOne.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);
    
    //defined in employeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;    

    //Example found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "213-555-1212");
    if (matchPtr != NULL)
        printf("Phone number is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Phone number is NOT found in the record\n");

    //Example found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34);
    if(matchPtr != NULL)
        printf("Employee with the same salary is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee with the same salary is not in the record\n");

    //Example not found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "213-545-1212");
    if (matchPtr != NULL)
        printf("Phone number is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Phone number is NOT found in the record\n");

    //Example not found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.04);
    if(matchPtr != NULL)
        printf("Employee with the same salary is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee with the same salary is not in the record\n");


return EXIT_SUCCESS;
}