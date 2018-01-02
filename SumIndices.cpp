#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> sumIndices;
        int currNum = target, currInd = 0;
        int firstInd, secondInd;

        for(int i=0; i<(int)nums.size(); i++){

            for(int j=0; j<i; j++) {
                if((i!=j) && (nums[j] == currNum - nums[i])) {
                    firstInd = j;
                    secondInd = i;
                    break;
                }
            }
        }

        sumIndices.push_back(firstInd);
        sumIndices.push_back(secondInd);

        return sumIndices;
    }
};

int main(){
    vector<int> nums;
    vector<int> result;
    Solution s;

    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);

    result = s.twoSum(nums, 6);
    for( int i=0; i<(int)result.size(); i++){
        cout << result[i] << endl;
    }


    return 0;
}
