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
char key;
    //Take the key
    for (int i = 0; i < 5; i++) {
        cout << "Enter the key : ";
        cin >> key;
        //save keys in string    
        x += key;
    }
    char table[6][6] = { { ' ' ,x[0],x[1],x[2],x[3] ,x[4]},
                           { x[0],'A','B','C','D','E'},
                           { x[1],'F','G','H','I','K'},
                           { x[2],'L','M','N','O','P'},
                           { x[3],'Q','R','S','T','U'},
                           { x[4],'V','W','X','Y','Z'} };
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
       if (y == "encrypt") {
        string plain_text, Cipher = "";
        int len = 0;
        cout << "Enter the plain text :  ";
        cin.ignore();
        getline(cin, plain_text);
        len = plain_text.length();
        //turn the string to uppercase
        transform(plain_text.begin(), plain_text.end(), plain_text.begin(), ::toupper);
        for (int n = 0; n < len; n++) {
            for (int i = 0; i < 6; i++) {
                for (int j = 0; j < 6; j++) {
                    if (plain_text[n] == table[i][j]) {
                        Cipher += table[i][0];
                        Cipher += table[0][j];
                    }
                }
            }
        }
        cout << "Cipher text : " << " " << Cipher;
        cout << endl;
    }
