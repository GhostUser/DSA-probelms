#include <iostream>

using namespace std;

void int_arr(int m, int arr[]){
    for(int i=0; i<m;i++){
        int a;
        cin>>arr[i];
    }
}

void display_arr(int n, int v[]) {
    for (int j = 0; j < n; j++)
        cout << v[j] << " ";
    cout << endl;
}

void sort012(int a[], int n){
    int i, cnt0=0, cnt1=0, cnt2=0;
    for(i=0; i<n; i++){
        if(a[i]==0){
            cnt0++;
        }else if(a[i]==1){
            cnt1++;
        }else if(a[i]==2){
            cnt2++;
        }
    }
    i=0;
    while (cnt0!=0 || cnt1!=0 || cnt2!=0){
        if (cnt0!=0){
            a[i++]=0;
            cnt0--;
        }else if(cnt1!=0){
            a[i++]=1;
            cnt1--;
        }else if(cnt2!=0){
            a[i++]=2;
            cnt2--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    int_arr(n,arr);
    sort012(arr,n);
    display_arr(n,arr);
    return 0;
}