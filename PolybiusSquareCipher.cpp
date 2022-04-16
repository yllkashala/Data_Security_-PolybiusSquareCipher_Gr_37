#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string x, y;
    cout << "Do you want to encrypt or decrypt ?" << endl;
    cin >> y;
    while (y != "encrypt" && y != "decrypt") {
        cout << "Wrong choice  " << endl;
        cout << "please enter again :  ";
        cin >> y;
    }
