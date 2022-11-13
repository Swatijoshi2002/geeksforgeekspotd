 int totalWays(int n, vector<int>capacity) {
       int z=1000000007;
       sort(capacity.begin(),capacity.end());
       int x=0;
       long long int ans=1;
       for(int i=0;i<capacity.size();i++)
       {
           int temp=(capacity[i]-x);
           x++;
           ans*=temp;
           ans=ans%z;
       }
       int res=ans%z;
       return res;
    }
