// Last updated: 6/8/2026, 7:40:43 PM
1class Solution {
2public:
3    vector<int> pivotArray(vector<int>& nums, int pivot) {
4        int n = nums.size();
5        vector<int> ans(n);
6        
7        int left = 0;
8        int right = n - 1;
9        int i=0,j=n-1;
10        
11        while(i<n){
12            if (nums[i] < pivot) {
13                ans[left++] = nums[i];
14            }
15            
16            if (nums[j] > pivot) {
17                ans[right--] = nums[j];
18            }
19
20            i ++;
21            j --;
22        }
23        while (left <= right) {
24            ans[left++] = pivot;
25        }
26        
27        return ans;
28    }
29};