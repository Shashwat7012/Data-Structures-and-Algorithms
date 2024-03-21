#include <bits/stdc++.h> 

 void solve(string s, string op, int index, vector<string> &ans, string mapping[]){
   if (index >= s.length()) {
     ans.push_back(op);
     return;
   }
   int digit = s[index] - '0';
   //return the integer value not character becuase we use string in this.
   string value = mapping[digit];

   for(int i=0; i<value.length(); i++){
	   op.push_back(value[i]);
	   	  solve(s,op,index+1,ans,mapping);
			 op.pop_back();


   }
 }

vector<string> findPossibleWords(string s)
{
	vector<string>ans;
	if(s.length() == 0){
		return ans;
	}
	string op;
	int index = 0;


	  string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	  solve(s,op,index,ans,mapping);
	  return ans;
}