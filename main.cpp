// Xor Obfuscator

#include<iostream>
#include<string>

using namespace std;

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
    char key[3] = { 'K', 'E', 'Y' };
    string data = XOR("text", key);
    cout << data;
    getchar();
    return 0;
}