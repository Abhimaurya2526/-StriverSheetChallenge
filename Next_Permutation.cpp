#include <bits/stdc++.h>
using namespace std;


vector<int> nextPermutation(vector<int> &A, int n)
{
    
    int ind = -1;
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            ind = i;
            break;
        }
    }

    if(ind==-1){
        reverse(A.begin(),A.end());
        return A;
    }

    for(int i=n-1;i>ind;i--){
        if(A[i]>A[ind]){
            swap(A[i],A[ind]);
            break;
        }
    }

    reverse(A.begin()+ind+1,A.end());
    return A;

}

int main()
{
    vector<int> mat = {1,2,3,4};
    int n= mat.size();
    vector<int> ans = nextPermutation(mat,n);
    for(auto ele:ans){
        cout<<ele<<" ";
    }

    return 0;  

}