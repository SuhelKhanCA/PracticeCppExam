// program of cpp
#include<iostream>
using namespace std;
void sort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);
int main(){
        
        int size;
        cout<<"Enter the size of the array";
        cin>>size;
        //int a[7] = {2, 4, 34, 56, 77, 45};
        int a[size];
        
        for (size_t i = 0; i < size; i++)
    {
        /* code */
        a[i] = 0;
    }
    
    cout<<"Enter the elements of the array";
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        cin>>a[i];
    }
        sort(a, 0, size);

    for (size_t i = 0; i < size; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    
    return 0;
}
void sort(int arr[], int l, int r){
    

    if(l<r){
        int m = l + (r-l)/2;

        sort(arr, l, m);
        sort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void merge(int arr[], int l, int m, int r){

    int n1 = m+1 - l;
    int n2 = r -m ;

    int L[n1];
    int R[n2];

    for (size_t i = 0; i < n1; i++)
    {
        /* code */
        L[i] = arr[l+i];
    }
    for (size_t j = 0; j < n2; j++)
    {
        /* code */
        R[j] = arr[m+1 +j];
    }
    
    int i =0;
    int j = 0;
    int k = l;
    while (i< n1 && j<n2)
    {
        /* code */
        if (L[i] <= R[j])
        {
            /* code */
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = R[j];
            j++;
        }
        k++;
        
    }

    while (i<n1)
    {
        arr[k] = L[i];

        i++;
        k++;
    }
    while (i< n2)
    {
        arr[k] = R[j];
    i++;
    j++;
    }
    
}