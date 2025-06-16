// ******
//  ***
//   *

#include<iostream>
using namespace std;

int main(){
    int i,j,r;
    cout<<"enter number of rows :";
    cin>>r;
    for(i=r;i>=1;i--){  // Changed to decrement from r to 1
        for(j=1;j<=r-i;j++){  // Print leading spaces
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){  // Print stars
            cout<<"*";
        }
        cout<<endl;
    }
}