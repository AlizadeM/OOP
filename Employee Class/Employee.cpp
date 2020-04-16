#include <iostream>
#include "Employee.h"

Employee::Employee (string name1,string name2,int salary){
                   setFirstName(name1);
                   setLastName(name2);
                   setMontlySalary(salary);
                   }
void Employee::setFirstName(string name1){
     firstName=name1;}
string Employee::getFirstName(){
       return firstName;}
void Employee::setLastName(string name2){
     lastName=name2;}
string Employee::getLastName(){
       return lastName;}
void Employee::setMontlySalary(int salary){
     Salary=salary;}
int Employee::getMontlySalary(){
    return Salary;}
