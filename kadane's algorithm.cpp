class Solution{
	public:
	int maxSumSubArray(int a[]){
    int maxSum = 0;
	int curSum = 0;
  for(int i=0; i<a.length;i++){
	curSum = curSum=a[i];
	if(curSum > maxSum){
		maxSum=curSum;
	}
	if(curSum<0){
		curSum=0;
	}
  }
	return maxSum;
	}
};
