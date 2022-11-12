	int characterReplacement(string s, int k){
	int	ans=1;
	
		    
		    for(char ch='A';ch<='Z';ch++)
		    {
		        int c=0;
		        int l=0,r=0;
		        while(r<s.size())
		        {
		            if(s[r]==ch)
		            {
		                ans=max(ans,(r-l)+1);
		                r++;
		            }
		            else{
		                if(c<k)
		                {
		                    ans=max(ans,(r-l)+1);
		                    c++;
		                    r++;
		                }
		                else{
		                    while(l<s.size() && s[l]==ch)
		                    {
		                        l++;
		                    }
		                    l++;
		                    c--;
		                }
		            }
		        }
		        
		    }
		    return ans;
		}
