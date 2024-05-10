/* Program name: Binary_to_Decimal_conversion.cpp
* Author: Martha Mwenje
* Date last updated: 06/11/2024
* Purpose: Coverting 5 Binary digits to Decimal
*/

#include <iostream>

using namespace std;

int main(){

    int d1, d2, d3, d4, d5;

    /*Input the binary digits d1, d2, d3, d4, d5*/

    cout << "Enter the 1st binary digit" << '\n';
    cin >> d1;
    cout << "Enter the 2nd binary digit" << '\n';
    cin >> d2;
    cout << "Enter the 3rd binary digit" << '\n';
    cin >> d3;
    cout << "Enter the 4th binary digit" << '\n';
    cin >> d4;
    cout << "Enter the 5th binary digit" << '\n';
    cin >> d5;

    /*Convert the binary number to decimal using the formular below*/

    int decimalValue = d5 * 1 + d4 * 2 + d3 * 4 + d2 * 8 + d1 * 16;

    /*Result*/
    
   cout << d1 << d2 << d3 << d4 << d5 << " to decimal is " << decimalValue << endl;
   return 0;
}
