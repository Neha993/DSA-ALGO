/* Problem Description

Given an array of integers A .

A represents a histogram i.e A[i] denotes height of the ith histogram's bar. Width of each bar is 1.

Find the area of the largest rectangle formed by the histogram.


Example Input
Input 1:

 A = [2, 1, 5, 6, 2, 3]
Input 2:

 A = [2]


Example Output
Output 1:

 10
Output 2:

 */int Solution::largestRectangleArea(vector<int> &A) {
    stack<long long>s;
    int n=A.size();
    long long ma=0;
    long long i=0;''
    while(i<n){
        if(s.empty() || A[s.top()]<=A[i]){
            s.push(i++);
        }
        else{
            long long tp=s.top();
            s.pop();
            long long ans=A[tp]*(s.empty()? i: i-s.top()-1);
            ma=max(ma,ans);
        }
    }
    while(!s.empty()){
        long long tp=s.top();
        s.pop();
        long long ans=A[tp]*(s.empty()?i: i-s.top()-1);
        ma=max(ma,ans);
    }
return ma;
}

