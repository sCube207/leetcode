#include <iostream>
#include <vector>
#include <algorithm>

bool containsDuplicate(vector<int>& nums) {
    std::sort(nums.begin(), nums.end(), std::greater<int>());
    int size = nums.size();

    auto last = std::unique(nums.begin(), nums.end());
    nums.erase(last, nums.end());
    if (nums.size() < size) 
        return true;
    else 
        return false;
}

int main() {
}
