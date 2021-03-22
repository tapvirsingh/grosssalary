#include<iostream>
#include<conio.h>

using namespace std;

int main(void){

    // Ask the user inttput the basic salary.
    cout << "Enter basic salary : ";

    // declare variables to store basic, hra, da and gross.
    float basic, hra, da, gross;

    const float HRA_MAX = 0.25, 
                HRA_MIN = 0.15, 
                DA_MAX = 0.5, 
                DA_MIN = 0.3,
                SALARY_THRESHOLD = 25000;

    // Get the user's basic salary.
    cin >> basic;

    if(basic > SALARY_THRESHOLD){
        // basic > 25000 then set hra to 25% of the basic salary.
        hra = basic * HRA_MAX;
        // basic > 25000 then set da to 50% of the basic salary.
        da = basic * DA_MAX;
    }else{
         // basic > 25000 then set hra to 15% of the basic salary.
        hra = basic * HRA_MIN;
        // basic > 25000 then set da to 30% of the basic salary.
        da = basic * DA_MIN;
    }

    gross = basic + hra + da;

    cout << "\nHRA : " << hra << "\nDA : " << da << "\nGross : "<<gross;

    cout << "\nPress any key to exit.";
    getch();

    return 0;
}