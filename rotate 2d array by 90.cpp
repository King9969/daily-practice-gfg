	 for(int i=0;i<n;i++)
    for(int j=0;j<i;j++)
    swap(arr[i][j],arr[j][i]);
    reverse(arr.begin(),arr.end());
    
    
    
    //swap along diagonal
     for(int i = 0; i < N; i++)
   {
       for(int j = 0; j <= i; j++)
       {
          swap(arr[i][j],arr[j][i]);
       }
    }
 // swap rows
   for(int i=0;i<N/2;i++){
       swap(arr[i],arr[N-i-1]);
   }
