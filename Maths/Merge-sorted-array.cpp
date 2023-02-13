#include <bits/stdc++.h>
using namespace std;
void merge(vector <int> &a , int m , vector <int> &b , int n)
{
    for(int i = 0 ; i < n ; i++)
        a[i + m] = b[i];
    sort(a.begin() , a.end());
    return;
}
int main()
{
    vector <int> a = {1 , 2 , 3};
    vector <int> b = {2 , 6 , 7};
    int m = 3 , n = 3;
    a.resize(m + n);
    merge(a , m , b , n);
    for(int &x : a)
        cout << x << " ";
    return 0;
}

// Time complexity :O(KlogK)
// Space complexity :  O(1)