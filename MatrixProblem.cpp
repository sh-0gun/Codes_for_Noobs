int findSum(int n) 
{ 
    // Generate matrix 
    int arr[n][n]; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            arr[i][j] = abs(i - j); 
  
    // Compute sum 
    int sum = 0; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            sum += arr[i][j]; 
  
    return sum; 
} 
  
// Driven Program 
int main() 
{ 
    int n = 3; 
    cout << findSum(n) << endl; 
    return 0; 
} 
