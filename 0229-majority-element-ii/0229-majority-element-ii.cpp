class Solution {
public:
   vector<int> majorityElement(vector<int>& nums) {
		// choose candidate integers
		int cand1 = 0, count1 = 0;
		int cand2 = 0, count2 = 0;
		for (int num : nums) {
			// count matches
			if (num == cand1) count1++;
			else if (num == cand2) count2++;
			// reselect candidate if needed, ensuring that they're distinct
			else if (count1 <= 0 and num != cand2) {
				cand1 = num;
				count1 = 1;
			}
			else if (count2 <= 0 and num != cand1) {
				cand2 = num;
				count2 = 1;
			}
			// decerement count if no matches or reslection
			else {
				count1--;
				count2--;
			}
		}

		// check candidates
		count1 = 0;
		count2 = 0;
		for (int num : nums) {
			if (num == cand1) count1++;
			else if (num == cand2) count2++;
		}

		// create output
		vector<int> out;
		if (count1 > nums.size() / 3) out.push_back(cand1);
		if (count2 > nums.size() / 3) out.push_back(cand2);
		return out;
	}
};