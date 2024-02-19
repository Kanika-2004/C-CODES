#include<iostream>
using namespace std;
int main(){
         int x,i,j;
    cin>>x;
    int arr[x];
    for(i=0;i<x;i++) {
        cout<<"enter element="<<endl;
        cin>>arr[i];
    }
    for(i=0;i<x;i++){
        j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
      cout<<endl<<"SORTED ARRAY"<<endl;
     for(i=0;i<x;i++) {
        cout<<arr[i]<<endl;
        
    }
    
}