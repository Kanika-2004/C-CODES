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
    for(i=0;i<x-1;i++){
        int temp;
        for(j=0;j<x-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<endl<<"SORTED ARRAY"<<endl;
     for(i=0;i<x;i++) {
        cout<<arr[i]<<endl;
        
    }
    return 0;
}