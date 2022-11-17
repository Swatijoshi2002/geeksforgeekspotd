	ll countSubarray(int arr[], int n, int k) {
	   
	   ll ans=(ll)n*(n+1)/2;
	   
	   ll c=0;
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]<=k)
	       {
	           c++;
	       }
	       else{
	           ans=ans-(c*(c+1)/2);
	           c=0;
	       }
	   }
	    ans=ans-(c*(c+1)/2);
	   return ans;
	}
