class Solution { 
public: 
double findMaxAverage(vector<int>& nums, int k) { 
long long windowSum = 0; 

// Find first window sum 
for (int i = 0; i < k; i++) { 
windowSum += nums[i]; 
} 

long long maxSum = windowSum; 

// Slide the window 
for (int i = k; i < nums.size(); ++i) { 
windowSum = windowSum + nums[i] - nums[i-k]; 
maxSum = max(maxSum, windowSum); 
} 

return (double) maxSum / k; 
} 
}; 