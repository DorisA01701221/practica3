#include <utility>
#include <stdio.h>
#include <string.h>
#include "iostream"

using namespace std;

string encrypt(string message, string key);
string decrypt(string message, string key);
int getNumberRepresentation(string key);

string XOR_Encryption(string message, string key)
{

    string sEncrypted(message);
    unsigned int iKey(key.length()), iIn(message.length()), x(0);
    for(unsigned int i = 0; i < iIn; i++)
    {
        sEncrypted[i] = message[i] ^ key[x];
        if(++x == iKey){ x = 0; }
    }
    return sEncrypted;
}


char* ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char* abc = "abcdefghijklmopqrstuvwxyz";

int main() {
    string key, message, result;
    int option;

    cout << "Give me the message: ";
    getline(cin, message);

    cout << "Give me the key: ";
    getline(cin, key);

    //option = -1;

    while (option != 3) {
        cout << "What do you want to do? \n 1) Encrypt\n 2) Decrypt\n 3) Exit\n";
        cin >> option;

        switch(option) {
            case 1:
                message = XOR_Encryption(message, key);
                cout<<" "<<message<<""<<endl;
                break;
            case 2:
                message = XOR_Encryption(message, key);
                cout<<" "<<message<<""<<endl;
                break;
            case 3:
                break;
        }

        cout<<""<<endl;
    }

    return 0;
}

string encrypt(string message, string key) {
    string result;
    message = XOR_Encryption(message, key);
    result = message;

    return result;
}

string decrypt(string result, string key) {

    return result;
}

int getNumberRepresentation(string key) {
    int size = key.length();
    int result = 0;

    for (int i = 0; i < size; i++) {
        result += int(key[i]);
    }

    return result;
}

