#include <iostream>
#include <vector>
#include <algorithm>

int singleNumber(std::vector<int>& nums) {
    int res = nums[0];

    for (int i = 1; i < nums.size(); i++)
        res ^= nums[i];
    return res;
}

int main() {
    std::vector<int>v  = {1, 2, 3, 4, 1, 2, 3};
    std::cout << singleNumber(v);
    return 0;
}
