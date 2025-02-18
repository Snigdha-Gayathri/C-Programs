#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> triplet(int n, vector<int>& nums)
 {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) 
    {
        if (i > 0 && nums[i] == nums[i - 1]) continue; 
        int j = i + 1;
        int k = n - 1;
        while (j < k) 
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0) 
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            } 
            else 
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1]) j++; 
                while (j < k && nums[k] == nums[k + 1]) k--; 
            }
        }
    }
    return ans;
}

int main() {
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<vector<int>> res = triplet(n, nums);
    cout << "Triplets that sum to zero are: " << endl;
    for (const auto& triplet : res) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }

    return 0;
}