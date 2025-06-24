// a
// bb
// ccc 
// dddd

#include<iostream>
using namespace std;
int main(){
    int i,j,r;
    char a='A';
    cout<<"enter number of rows :";
    cin>>r;

    for(i=1;i<=r;i++){
        for(j=1;j<i;j++){
           cout<<a;
        }
        cout<<endl;
        a++;
    }
}