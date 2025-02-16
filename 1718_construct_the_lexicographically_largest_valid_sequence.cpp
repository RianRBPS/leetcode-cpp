class Solution {
    public:
        vector<int> constructDistancedSequence(int n) {
            vector<int>res(2*n-1,0);
            vector<bool>used(n+1,false);
            backtrack(res,used,0,n);
            return res;
        }
    
    private:
    bool backtrack(vector<int>&res,vector<bool>& used, int index, int n) {
        if(index == res.size()) return true;
    
        if(res[index] != 0) return backtrack(res,used,index+1,n);
    
        for(int num=n; num>=1; --num){
            if(num == 1){
                if(!used[num]){
                    res[index] = num;
                    used[num] = true;
                    if (backtrack(res, used, index+1, n)) return true;
                    res[index] = 0;
                    used[num] = false;
                }
            } else{
                if(!used[num] && index + num < res.size() && res[index + num] == 0) {
                    res[index] = res[index + num] = num;
                    used[num] = true;
                    if(backtrack(res,used,index+1,n)) return true;
                    res[index] = res[index + num] = 0;
                    used[num] = false;
                }
            }
        }
        return false;
    }
    };