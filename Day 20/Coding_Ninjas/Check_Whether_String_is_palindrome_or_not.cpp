#include <bits/stdc++.h>

 

void upperToLower(string &s){

    for(int i = 0 ; i < s.size() ; i++){

        if(s[i] >= 'A' && s[i] <= 'Z'){

            char temp = (s[i] - 'A') + 'a';

            s[i] = temp ;

        }

    }

} 

 

int validStartIndex(string &s, int start){

    while(start < s.size()){

        if((s[start] >= 'a' && s[start] <= 'z') || (s[start] >= '0' && s[start] <= '9')){

            return start;

        }

        else{

            start++;

        }

    }

    

    return s.size();

}

 

int validEndIndex(string &s, int end){

    while(end >= 0){

        if((s[end] >= 'a' && s[end] <= 'z') || (s[end] >= '0' && s[end] <= '9')){

            return end;

        }

        else{

            end--;

        }

    }

    

    return -1;

}

 

bool checkPalindrome(string s)

{

    upperToLower(s);

    int start = 0, end = s.size() - 1;

 

    int left = validStartIndex(s, start) ;

    int right = validEndIndex(s, end);

        

    while(left < right){

        if(s[left] != s[right]){

            return false;

        }

        else{

            left++, right--;

        }

        

        left = validStartIndex(s, left) ;

        right = validEndIndex(s, right);

    }

 

    return true;

}