/* */vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int n=A.size();
    multiset<int,greater<int>>s;
    vector<int>ans;
    for(int i=0;i<B;i++){
        s.insert(A[i]);
    }
    ans.push_back(*s.begin());
    for(int i=B;i<n;i++){
        s.erase(s.lower_bound(A[i-B]));
        s.insert(A[i]);
        ans.push_back(*s.begin());
    }
    return ans;
}

