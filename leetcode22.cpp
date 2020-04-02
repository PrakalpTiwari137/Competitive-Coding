class Solution {
public:
    vector<string> vec;
    
    void func(string str, int open, int close, int max){
        if(str.length() == 2*max){
            vec.push_back(str);
            return;
        }
        if(open < max)
            func(str+"(",open+1,close,max);
        if(close < open)
            func(str+")",open,close+1,max);
    }
    vector<string> generateParenthesis(int n) {
        func("",0,0,n);
        return vec;
    }
};
