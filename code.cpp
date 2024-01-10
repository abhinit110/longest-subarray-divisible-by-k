int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    
	    unordered_map<int,int>m;
	    int max_len=0,rem;long long sum=0;
	    for(auto i=0;i<n;i++)
	    {
	        sum+=arr[i];
	        rem=sum%k;
	        
	        if(rem==0)
	        max_len=max(max_len,i+1);
	        if(rem<0)
	        rem+=k;
	        if(m.find(rem)==m.end())
	        m[rem]=i;
	        else
	        {
	            max_len=max(max_len,i-m[rem]);
	        }
	    }
	    return max_len;
	}
