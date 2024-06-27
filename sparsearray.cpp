// C++ program to find number of times a 
// string appears in an array.
#include<bits/stdc++.h>
using namespace std;

// Returns count of occurrences of s in arr[] 
int search(string arr[], string s, int n)
{
    int counter = 0;

    for(int j = 0; j < n; j++)
    
        // Checking if string given in query
        // is present in the given string. 
        // If present, increase times
        if (s == arr[j])
            counter++;

   return counter;
}
 
void answerQueries(string arr[], string q[], 
                   int n, int m)
{
    for(int i = 0; i < m; i++)
        cout << search(arr, q[i], n) << " ";
}    

// Driver Code
int main()
{
    string arr[] = { "aba", "baba", 
                     "aba", "xzxb" };
    string q[]   = { "aba", "xzxb", "ab" };
    
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(q) / sizeof(q[0]);
    
    answerQueries(arr, q, n, m);
}

// This code is contributed by rutvik_56

