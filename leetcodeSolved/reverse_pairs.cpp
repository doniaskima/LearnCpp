//https://leetcode.com/problems/reverse-pairs/description/

class Solution {
public:
    
    // Merge function to merge two sorted halves of the array
    void merge(vector<int> &nums, int low, int mid, int high){
        vector<int> temp; // Temporary vector to store the merged result
        int left = low;   // Pointer for the left subarray
        int right = mid + 1; // Pointer for the right subarray

        // Compare elements from both subarrays and merge them into temp
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        // Copy remaining elements from the left subarray, if any
        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        // Copy remaining elements from the right subarray, if any
        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        // Copy the merged result back to the original array nums
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    // Merge Sort function to sort and count reverse pairs
    int mergeSort(vector<int> &nums, int low, int high){
        int count = 0; // Counter for reverse pairs

        // Base case: if the subarray has one or zero elements, return 0
        if (low >= high) return count;

        int mid = low + (high - low) / 2; // Calculate the midpoint

        // Recursively sort and count reverse pairs in left and right subarrays
        count += mergeSort(nums, low, mid);
        count += mergeSort(nums, mid + 1, high);

        // Count reverse pairs between the left and right subarrays
        count += countPairs(nums, low, mid, high);

        // Merge the sorted subarrays
        merge(nums, low, mid, high);

        return count; // Return the total count of reverse pairs
    }

    // Function to count reverse pairs between two halves
    int countPairs(vector<int> &nums, int low, int mid, int high){
        int right = mid + 1; // Pointer for the right subarray
        int count = 0;       // Counter for reverse pairs

        // Iterate through the left subarray
        for (int i = low; i <= mid; i++) {
            // Find the rightmost element in the right subarray
            // that is greater than twice the value of the current element
            while (right <= high && nums[i] > 2LL * nums[right]) {
                right++;
            }
            // Count the number of elements in the right subarray
            // that are less than or equal to half the value of the current element
            count += (right - (mid + 1));
        }
        return count; // Return the count of reverse pairs
    }

    // Main function to find and count reverse pairs in the array
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1); // Call mergeSort with the entire array
    }
};

