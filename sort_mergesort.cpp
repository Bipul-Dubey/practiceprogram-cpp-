/*Mergesort(arr[],l,r){
    if(l<r){
        mid=(l+r)/2          //find middle point to divide array
        Mergesort(arr[],l,mid)          //call mergesort for first half
        Mergesort(arr[],mid+1,r)       //call mergesort for second half
        merge(arr[],l,mid,r)          // merge the 2 halves sorted in previous step
    }
}*/


#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2]; 
     
     for(int i=0;i<n1;i++){
         a[i]=arr[l+i];
     }
     for(int i=0;i<n2;i++){
         b[i]=arr[mid+1+i];
     }
int i=0;
int j=0;
int k=l;
while(i<n1 && j<n2){
    if(a[i]<b[j]){
        arr[k]=a[i];
        k++; i++;
    }
    else{
        arr[k]=b[j];
        k++; j++;
    }
}
    while(i<n1){
        arr[k]=a[i];
        k++; i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++; j++;
    }
}

void mergeSort(int arr[], int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
mergeSort(arr,0,n-1);
cout<<"Sorted array: ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;
}