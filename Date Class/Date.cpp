#include "Date.h"
#include <iostream>

Date::Date (int d,int m,int y){
           setDay(d);
           setMonth(m);
           setYear(y);}
void Date::setDay(int d){
     if(1<=d<=31) day=d;
     else day=1;}
int Date::getDay(){
    return day;}
void Date::setMonth(int m){
     if(1<=m<=12) month=m;
     else month=1;}
int Date::getMonth(){
    return month;}
void Date::setYear(int y){
     year=y;}
int Date::getYear(){
    return year;}
void Date::displayDate(){
       cout<<"Date(d/m/y):"<<getDay()<<"/"<<getMonth()<<"/"<<getYear()<<endl;}
