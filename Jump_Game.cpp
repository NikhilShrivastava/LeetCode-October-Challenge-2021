class Solution {
public:
    bool canJump(vector<int>& nums) {
	if (nums.size() == 1) {
		return true;
	}

	int max_reachable_location = nums[0];
	for (int i = 0; i < nums.size(); ++i) {
		if (max_reachable_location >= i) {
			max_reachable_location = max(nums[i] + i, max_reachable_location);
			if (max_reachable_location >= nums.size() -1) {
				return true;
			}
		}

	}
	return false;
}
    
};
