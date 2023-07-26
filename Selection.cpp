#include <iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[mini]>arr[j]){
                mini=j;
                
            }
        }
            int temp=arr[mini];
            arr[mini]=arr[i];
            arr[i]=temp;
            
        }
    }

    int main(){
        int n;
        cin>>n;

        int arr[100];
        for(int i=0;i<=n;i++){
            cin>>arr[i];
        }
        SelectionSort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
        return 0;
    }

