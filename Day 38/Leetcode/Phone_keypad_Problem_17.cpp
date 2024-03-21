// leetcode :- 17
//backtracking :- pop_back()
class Solution {

private:
    void solve(string digit, string op, int index, vector<string> &ans, string mapping[]){

        //base case
        if(index >= digit.length()){
            ans.push_back(op);
            return;
        }

        int number = digit[index] - '0';
        //it returns chrachter so, subtract by 0
        string value = mapping[number];

        for(int i=0;i<value.length();i++){
            op.push_back(value[i]);
            solve(digit,op,index+1,ans,mapping);
            op.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length() == 0){
            return ans;
        }
        string op;
        int index = 0;

        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        solve(digits,op,index,ans,mapping);
        return ans;
    }
};