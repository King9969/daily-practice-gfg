    int countWays(int n){
        int a=1; int b=1;
        if(n==1)return 1;
        if(n==2)return 2;
        for(int i=2;i<=n;i++){
            int c = (a+b)%1000000007;
            a = b;
            b = c;
      }
      return b;
    }
