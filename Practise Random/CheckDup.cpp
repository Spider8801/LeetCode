#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
    public:
        bool containsDuplicate(vector<int> &nums)
            {
                for(int i=0; i<nums.size(); i++)
                {
                    for(int  j= i+1; j< nums.size(); j++)
                        if(nums[i] == nums[j])
                            return true;
                }
                return false;
            }

};

int main()
{
    Solution Sol;
    vector<int> nums1= {1, 2, 3, 4};
    cout<< (Sol.containsDuplicate(nums1) ? "true" : "false")<<endl;
    vector<int> nums2= {1, 2, 1, 6, 3};
    cout<<(Sol.containsDuplicate(nums2) ? "true": "false")<<endl;
    vector<int> nums3= {1,7,2,9,0};
    cout<< (Sol.containsDuplicate(nums3) ? "true": "false")<<endl;
}