#include <bits/stdc++.h>
using namespace std;
 
// Function to find indexes
// of the given string that 
// satisfy the condition
void printIndexes(string str)
{
    // Stores length of 
    // given string
    int N = str.length();
     
    // Stores frequncy of
    // each character of str
    int cntFreq[256] = {0};
     
    for (int i = 0; i < N; 
                      i++) {
         
        // Update frequency of
        // current character
        cntFreq[str[i]]++;
         
    }
     
    // cntLeftFreq[i] Stores frequncy
    // of characters present on
    // the left side of index i.
    int cntLeftFreq[256] = {0};
     
    // Traverse the given string
    for (int i = 0; i < N; i++) {
         
        // Stores count of smaller
        // characters on left side of i.
        int cntLeft = 0;
         
         
        // Stores count of smaller
        // characters on Right side of i.
        int cntRight = 0;
         
        // Traverse smaller characters
        // on left side of index i.
        for (int j = str[i] - 1; 
                    j >= 0; j--) {
             
             
            // Update cntLeft   
            cntLeft += cntLeftFreq[j];
             
            // Update cntRight
            cntRight += cntFreq[j]
                   - cntLeftFreq[j];
        }
         
        // Update cntLeftFreq[str[i]]
        cntLeftFreq[str[i]]++;
         
        // If count of smaller elements
        // on both sides equal
        if (cntLeft == cntRight &&
                 cntLeft != 0) {
             
            // Print current index;
            cout<<i<<" ";
        }
          
    }
}
 
// Driver Code 
int main()
{
    string str = "aabacdabbb";
    printIndexes(str);
}
