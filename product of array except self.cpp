       vector<long long int> v;
       int pr=1;
       for(int i=0;i<n;i++){
           v.push_back(pr);
           pr=pr*nums[i];
       }
    int x=1;
       for(int i=n-1;i>=0;i--){
           v[i]=v[i]*x;
           x=x*nums[i];
       }
       return v;
