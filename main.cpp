// Libs
#include<Windows.h>
#include<iostream>
#include<string>

using namespace std;
string text;


// Colors
void setcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}

// Encryption & Decription Function
string XOR(string data, char key[])
{
    string xorstring = data; // Initialize a variable for our XOR data
    for (int i = 0; i < xorstring.size(); i++) { // This is for scrambling things in the string
        xorstring[i] = data[i] ^ key[i % (sizeof(key) / sizeof(char))]; // Scrambling the string or descambling it
    }
    return xorstring;
}

// Xor Function
int main(){
    system("cls");
    setcolor(2);
    cout<<"                                         _____ _____ _____ _____ _____ "<<endl;
    cout<<"                                        |   __|  _  |   __|  _  |     |"<<endl;
    cout<<"                                        |  |  |     |__   |     |-   -|"<<endl;
    cout<<"                                        |_____|__|__|_____|__|__|_____| \n \n \n"<<endl;
    
    cout<<"[";
    setcolor(15);
    cout<<"+";
    setcolor(2);
    cout<<"] What string do you want to encrypt?: ";
    setcolor(15);
    cin>>text;
    cout<<"\n";

    char key[5 /*Number of charactes */] = { 'K', 'E', 'N', 'Y', 'H'}; // Encryption key, you can change it but you also need to modify the number of characters
    string data = XOR(text, key);
    setcolor(2);
    cout<<"[";
    setcolor(15);
    cout<<"+";
    setcolor(2);
    cout<<"] ";
    cout<<data<<endl;
    system("pause>nul");
    main();
}