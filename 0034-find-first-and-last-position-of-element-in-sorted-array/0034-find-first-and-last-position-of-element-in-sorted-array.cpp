class Solution {
public:
    int upper_bound(vector<int> &arr, int target) {
		int left = 0;
		int right = arr.size() - 1;
		int ans = -1;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (arr[mid] == target) {
				//found possible answer look for another one in right
				ans = mid;
				left = mid + 1;
			} else if (arr[mid] > target) {
				right = mid - 1;
			} else {
				left = mid + 1;
			}
		}
		return ans;
	}
	int lower_bound(vector<int> &arr, int target) {
		int left = 0;
		int right = arr.size() - 1;
		int ans = -1;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (arr[mid] == target) {
				//found possible answer look for other in left
				ans = mid;
				right = mid - 1;
			} else if (arr[mid] > target) {
				//look in left
				right = mid - 1;
			} else {
				left = mid + 1;
			}
		}
		return ans;
	}
    vector<int> searchRange(vector<int> arr, int target) {
        return {lower_bound(arr,target),upper_bound(arr,target),};
    }
};