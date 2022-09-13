#ifndef googleh
#define googleh

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Company{
    private:
        string companyName;
        
        vector <string> EmployeeNames;
        vector <int> EmployeeSalary;
    public:
        Company();
        Company(string name);
        

        bool AddEmployee(string name, int salary);     

double CalcAvgSalaries();


int getMaxSalary();


int CountSameNames(string name);


};
#endif