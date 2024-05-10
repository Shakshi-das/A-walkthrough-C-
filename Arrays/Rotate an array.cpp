// C++ implementation of right rotation 
// of an array K number of times

#include<bits/stdc++.h>
using namespace std;

// Function to rightRotate array
void RightRotate(int a[], int n, int k)
{
    
    k = k % n;

    for(int i = 0; i < n; i++)
    {
       if(i < k)
       {        
           cout << a[n + i - k] << " ";
       }
       else
       {        
           cout << (a[i - k]) << " ";
       }
    }
    cout << "\n";
}
    
// Driver code
int main()
{
    int Array[] = { 1, 2, 3, 4, 5 };
    int N = sizeof(Array) / sizeof(Array[0]);
    int K = 2;
    
    RightRotate(Array, N, K);
}
