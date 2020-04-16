#include <cstdlib>
#include <iostream>
#include "Employee.h"
using namespace std;

int main(int argc, char *argv[])
{
    Employee employee1 ( "Volkan","Ektiren",2000 );
    Employee employee2 ( "Ad","Soyad", 1000 );
    cout << "Employee's name and lastname :" << employee1.getFirstName() << " " << employee1.getLastName()
    <<"\nEmployee's mountly salary :"<<employee1.getMontlySalary()<<"$";
    employee1.setMontlySalary(employee1.getMontlySalary()*12);
    cout<<"\nEmployee's yearly salary :"<<employee1.getMontlySalary()<<"$";
    employee1.setMontlySalary(employee1.getMontlySalary()*1.1);
    cout<<"\nEmployee's 10 percent raised yearly salary :"
    <<employee1.getMontlySalary()<<"$"<<endl;
    cout << "Employee's name and lastname :" << employee2.getFirstName() << " " << employee2.getLastName()
    <<"\nEmployee's mountly salary :"<<employee2.getMontlySalary()<<"$";
    employee2.setMontlySalary(employee2.getMontlySalary()*12);
    cout<<"\nEmployee's yearly salary :"<<employee2.getMontlySalary()<<"$";
    employee2.setMontlySalary(employee2.getMontlySalary()*1.1);
    cout<<"\nEmployee's 10 percent raised yearly salary :"<<employee2.getMontlySalary()<<"$"<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
