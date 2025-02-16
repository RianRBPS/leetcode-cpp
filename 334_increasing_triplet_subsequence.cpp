class Solution {
    public:
        bool increasingTriplet(vector<int>& nums) {
            int first = INT_MAX, second = INT_MAX;
    
            for(int num : nums) {
                if(num <= first) {
                    first = num; // att o menor val encontrado
                } else if(num <= second) {
                    second = num; // att o segundor menor val encontrado
                } else {
                    return true; // encontramos um num maior que second, formando um triplet
                }
            }
            return false; // se o loop terminar sem encontrar o triplet
        }
    };