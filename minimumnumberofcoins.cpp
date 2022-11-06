class Solution{
public:
    vector<int> minPartition(int N)
    {
       vector<int> a;
       vector<int> v{1,2,5,10,20,50,100,200,500,2000};
       auto pos=upper_bound(v.begin(),v.end(),N)-v.begin()-1;
      // cout<<pos;
       while(N>0 && pos>=0)
       {
           //cout<<pos<<" ";
           if(N==v[pos])
           {
             a.push_back(v[pos]); 
             N=N-v[pos];  
           }
           if(N<=v[pos])
           {
               pos--;
           }
           else if(N-v[pos]>=0)
           {
               a.push_back(v[pos]); 
               N=N-v[pos];
           }
           
       }
       return a;
    }
};
