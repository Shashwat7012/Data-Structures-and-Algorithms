#include<iostream>
using namespace std;

 bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return true;
        } else {
            return false;
        }
    }

    char toLowerCase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        } else {
            return ch;
        }
    }

    bool palindrome(string a) {
        int s = 0;
        int e = a.length() - 1;
        while (s < e) {
            if (a[s] != a[e]) {
                return false;
            } else {
                s++;
                e--;
            }
        }
        return true;
    }


int main(){
 string s = "A man, a plan, a canal: Panama";
 string temp = "";
  for (int j = 0; j < s.length(); j++) {
            if (valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        for (int j = 0; j < temp.length(); j++) {
            temp[j] = toLowerCase(temp[j]);
        }
        cout<<palindrome(temp);
}