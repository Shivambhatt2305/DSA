// Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

#include <bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int i,j,r,temp[r]={0};
    int zero_count = 0;
    cout<<"enter number of rows :";
    cin>>r;
    int arr[r][r];
    cout<<"enter the matrix :"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            cout<<"arr["<<i<<"]["<<j<<"]:";
            cin>>arr[i][j];
        }
    }
     for(i=0;i<r;i++) {
        for(j=0;j<r;j++) {
            if (arr[i][j]==0) {
                // Store the row to be zeroed later
                temp[zero_count++]=i;
                
                // Zero the entire column immediately
                for(int k=0;k<r;k++) {
                    arr[k][j]=0;
                }
                break; // Move to next row after finding a zero
            }
        }
    }

    // Second pass: Zero all marked rows
    for (int k = 0; k < zero_count; k++) {
        for (j = 0; j < r; j++) {
            arr[temp[k]][j] = 0;
        }
    }
    
   
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
