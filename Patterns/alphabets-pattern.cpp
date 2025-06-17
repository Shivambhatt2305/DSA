// A
// AB
// ABC 
// ABCD 
// ABCDE

#include<iostream>
using namespace std;
int main(){
    char a;
    int i,j,r;
    cout<<"enter number of rows :";
    cin>>r;
    for(i=0;i<r;i++){
        for(j=0;j<=i;j++){
            a='A'+j;
            cout<<a;
        }
        cout<<endl;
    }
}
