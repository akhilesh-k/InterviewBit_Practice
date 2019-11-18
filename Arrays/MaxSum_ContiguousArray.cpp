int Solution::maxSubArray(const vector<int> &A) {
    int max_1=A[0],max_2=A[0];
    for(int i=1;i<A.size();i++){
        max_2=max(max_2+A[i],A[i]);
        if(max_1<max_2)
         max_1=max_2;
    }
    return max_1;
}
