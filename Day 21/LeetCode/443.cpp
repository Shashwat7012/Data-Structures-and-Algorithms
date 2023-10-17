class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansindex =0; // valid char ka count
        int n = chars.size();

        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            // when?
            // all vector is traversed
            // if new char encounters

            //old char store
            chars[ansindex++] = chars[i];
            int count =  j-i;

            if(count>1){
                // converting counting into single digit and saving into ans.
                string cnt = to_string(count);
                for(char ch: cnt){
                    chars[ansindex++] = ch;
                }
            }
            i=j;
        }
        return ansindex;
    }
};

//complexity :- O(n);