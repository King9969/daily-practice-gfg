    int nCr(int n, int r){
        if(r>n)return 0;
       if(r>(n-r))r=n-r;
       int mod=1e9+7;
        vector<int>dp(r+1, 0);
       dp[0]=1;
       for(int i=1;i<=n;i++){
           for(int j=min(r,i);j>0;j--){
               dp[j]=(dp[j-1]+dp[j])%mod;
           }
       }
       return dp[r];
    }
