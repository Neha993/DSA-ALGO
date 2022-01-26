/* Given a string A consisting only of '(' and ')'.

You need to find whether parantheses in A is balanced or not ,if it is balanced then return 1 else return 0.

*/
int Solution::solve(string A) {
    stack<char> st;
        int i;
        for(i=0;i<A.size();i++)
        {
            if(A[i]=='('||A[i]=='{'||A[i]=='[')
            st.push(A[i]);
            else
            {
                if(st.empty()!=1&&((A[i]==')'&&st.top()=='(')||(A[i]=='}'&&st.top()=='{')||(A[i]==']'&&st.top()=='[')))
                    st.pop();
                else 
                   return false;
            }
            
        }
        return st.empty();
}
