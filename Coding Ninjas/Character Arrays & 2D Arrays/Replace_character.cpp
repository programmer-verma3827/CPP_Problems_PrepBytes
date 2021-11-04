/*
Replace Character

Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)
Output Format :
Updated string
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd

*/

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

void replaceCharacter(char input[], char c1, char c2) {
    
    // Write your code here
    
    int n = strlen(input);   //calculating length
    //c1 = 'a';
    //c2 = 'x';
    for(int i=0;i<n;i++)
    {
        if(input[i]==c1)     //checking if ith char is c1
        {
            input[i] = c2;   //replacing it with c2 char
        }
    }
    
}

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
