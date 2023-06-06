#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long ans=0;
    ordered_set os;
    os.insert(arr[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        ans+=os.order_of_key(arr[i]);
        os.insert(arr[i]);
    }
    return ans;
}
