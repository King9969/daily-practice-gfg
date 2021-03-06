    vector <int> calculateSpan(int price[], int n){
       vector<int> res;
       stack<int> s;
       for(int i = 0; i < n; i++) {
           while(!s.empty()&& price[s.top()] <= price[i])s.pop();
           if(s.empty()) res.push_back(i+1);
           else res.push_back(i - s.top());
           s.push(i);
       }
       return res;
    }
