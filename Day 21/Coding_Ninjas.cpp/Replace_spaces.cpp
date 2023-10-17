#include <bits/stdc++.h> 

string replaceSpaces(string &str) {
    string temp = "";

    for (int i = 0; i < str.length(); i++) { // Changed the loop condition from str.length()-1 to str.length()
        if (str[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        } else {
            temp.push_back(str[i]);
        }
    }
    return temp;
}