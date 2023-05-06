#include <iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }

        }
        if(mini!=i){
            swap(arr[i],arr[mini]);
        }

    }
}
int main(){
    int arr[6]={6,3,4,1,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}