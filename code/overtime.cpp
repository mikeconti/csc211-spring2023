// Write a program in C++ (on paper) that:
// reads the number of hours
// calculates payment:
// if number of hours no greater than 40, payment is calculated using the regular hourly rate of $35
// if overtime, payment is calculated using the regular hourly rate for the first 40 hours and 
// the special  rate of $50 for the remaining hours prints the calculated payment

#include <iostream>

int main(){

    int hoursWorked, pay;


    std::cin >> hoursWorked;

    if(hoursWorked <= 40){
        pay = hoursWorked * 35;
        std::cout << pay;
    }
    else{
        int overtime = hoursWorked - 40;

        pay = (40 * 35) + (overtime * 50);
        std::cout << pay;
    }

    

    return 0;
}