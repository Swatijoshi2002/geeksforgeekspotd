 int solve(vector<int>&v)
  {
      int mx=INT_MIN;
      int mi=INT_MAX;
      for(int i=0;i<v.size();i++)
      {
          if(v[i]!=0)
          {
              mx=max(mx,v[i]);
              mi=min(mi,v[i]);
          }
      }
      return mx-mi;
  }
    int beautySum(string s) {
       
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
          vector<int> v(26,0);
          for(int j=i;j<s.length();j++)
          {
             v[s[j]-'a']+=1;
             sum+=solve(v);
             
          }
        }
 
       
        return sum;
    }
