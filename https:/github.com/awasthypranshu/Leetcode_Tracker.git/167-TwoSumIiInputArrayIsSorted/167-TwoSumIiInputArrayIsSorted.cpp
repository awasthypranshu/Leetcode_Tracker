// Last updated: 26/07/2026, 22:05:25
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int st = 0;
        int end = n-1;
        while(st < end){
            int currSum = numbers[st] + numbers[end];
            if(currSum == target){
                return {st+1,end+1};
            }else if(currSum > target){
                end--;
            }else{
                st++;
            }
        }
        return {-1};
    }
};