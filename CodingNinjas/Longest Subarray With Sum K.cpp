int longestSubarrayWithSumK(vector<int> a, long long k) {
  // Write your code here
  //Time Complexity - O(N^2); S.C. - O(1)
  int n = a.size();
  long long currentSum = 0;
  int startInd = 0;
  int endInd = -1;
  int maxLength =0;
 while(startInd <n){
   while(endInd +1 <n && currentSum+a[endInd+1]<=k){
     currentSum+=a[endInd+1];
     endInd++;
   }
   if(currentSum==k){
     maxLength = max(maxLength, endInd - startInd +1);
   }
   currentSum -=a[startInd];
   startInd++;
 }
 return maxLength;
}