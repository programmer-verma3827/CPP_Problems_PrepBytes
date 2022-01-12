/*

Code : Pair Sum to 0
Send Feedback
Given a random integer array A of size N. Find and print the count of pair of elements in the array which sum up to 0.
Note: Array A can contain duplicate elements as well.
Input format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol N.
The following line contains N space separated integers, that denote the value of the elements of the array.
Output format :
The first and only line of output contains the count of pair of elements in the array which sum up to 0. 
Constraints :
0 <= N <= 10^4
Time Limit: 1 sec
Sample Input 1:
5
2 1 -2 2 3
Sample Output 1:
2

*/

#include <iostream>
using namespace std;

#include <unordered_map>

int pairSum(int *arr, int n) {
    
	// Write your code here
    
    unordered_map<int, int> map;
    int countPairs = 0;
    
    for(int i=0;i<n;i++)
    {
        int res = -arr[i];
        if(map.find(res) != map.end())
        {
            countPairs = countPairs + map[res];
        }
        map[arr[i]]++;
    }
    
    return countPairs;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}
