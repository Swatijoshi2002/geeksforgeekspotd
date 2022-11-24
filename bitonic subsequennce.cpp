int LongestBitonicSequence(vector<int>nums)
	{
	   int n=nums.size();
	   vector<int> inc(n,1);
	   vector<int>dec(n,1);
	   for(int i=0;i<n;i++)  //longest incresing subsequence
	   {
	       for(int j=i-1;j>=0;j--)
	       {
	           if(nums[j]<nums[i] && inc[j]+1>inc[i])
	           {
	               inc[i]=inc[j]+1;
	           }
	       }
	   }
	   
	    for(int i=n-1;i>=0;i--) //longest incresing subsequence from back
	   {
	       for(int j=i+1;j<n;j++)
	       {
	           if(nums[j]<nums[i] && dec[j]+1>dec[i])
	           {
	               dec[i]=dec[j]+1;
	           }
	       }
	   }
	   int ans=0;
	   for(int i=0;i<n;i++)
	   {
	       ans=max(ans,inc[i]+dec[i]-1);
	   }
	   return ans;
	}
