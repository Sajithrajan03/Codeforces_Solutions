#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int test;
    cin>>test;
    
    while (test--)
    {   
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++) cin>>arr[i];
        int count =0;
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
        {
            if (arr[i-1]==arr[i]) {count=1; break;}
        }
        if (count==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}