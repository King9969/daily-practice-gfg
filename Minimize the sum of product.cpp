 long long int minValue(int a[], int b[], int n)
    {
        sort(a,a+n);
        sort(b,b+n);
        long long int sum=0;
        for(int i=0;i<n;i++)sum+=a[i]*b[n-1-i];
        return sum;
    }
