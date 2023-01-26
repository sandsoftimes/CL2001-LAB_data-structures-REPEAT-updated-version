#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 

void printcollection(char arr1[], char arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] == arr2[j])
            cout << arr1[i++] << " ";
            i++;}
    while (j < n)
        cout << arr2[j++] << " ";
}
 

int main()
{
    char arr1[] = { 'A', 'B', 'C', 'D', 'E','F','G','H' };
    char arr2[] = { 'A', 'C', 'E', 'H' };
    int arr3[]={};
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    
    printcollection(arr1, arr2, m, n);
 
    return 0;
}