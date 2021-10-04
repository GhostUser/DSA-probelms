#include <iostream>

using namespace std;

int sum_a(int n,int arr[]){
    int sum=0;
    for (int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int maxm(int n, int arr[]){
    int max=arr[0];
    for (int i=0; i<n; i++){
        if (max<arr[i]){
            max=arr[i];
        }
        else{
            continue;
        }
    }
    return max;
}


void solve(){
    int t, p1=0, p2=0;
    int w,l, ma;
    cin>>t;
    int p1a[t], p2a[t], p1d[t], p2d[t];
    for (int i=0; i<t; i++){
        int a, b;
        cin>>a>>b;
        p1+=a;
        p2+=b;
        p1a[i]=p1;
        p2a[i]=p2;
        if(p1>p2){
            p1d[i]=p1-p2;
            p2d[i]=0;
        }
        else if(p2>p1){
            p2d[i]=p2-p1;
            p1d[i]=0;
        }
    }
    if (sum_a(t, p1d)>sum_a(t, p2d)){
        w=1;
        l=2;
        ma=maxm(t, p1d);
    }else{
        w=2;
        l=1;
        ma=maxm(t, p2d);
    }
    printf("%d %d", w, ma);
}


int main(){
    solve();
    return 0;
}