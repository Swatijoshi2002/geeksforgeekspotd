 long long jumpingNums(long long X) {
     if(X<=9)return X;
     queue<int> q;
     for(int i=1;i<=9;i++)
     {
         q.push(i);
     }
      int ans=INT_MIN;
      while(q.size()>0)
      {
          int d=q.front();
          q.pop();
          ans=max(ans,d);
          int r=d%10;
          int l=d*10+r-1;
           int ri=d*10+r+1;
           if(r==0)
           {
               if(ri<=X)
               {
                   q.push(ri);
               }
           }
           else if(r==9)
           {
               if(l<=X)
               {
                   q.push(l);
               }
           }
           else {
                if(l<=X)
               q.push(l);
               if(ri<=X)
               q.push(ri);
           }
      }
        
      
        return ans;
    }
