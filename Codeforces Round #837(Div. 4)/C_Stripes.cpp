#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int test;
    cin>>test;
    
    while (test--)
    {   
         
        char arr[8][8];
        for (int i=0;i<8;i++) 
        {
            for (int j=0;j<8;j++)
            {
                cin>>arr[i][j];
            }
        }
        int count =0,flag=0;
        for (int i=0;i<8;i++) 
        {
            for (int j=0;j<8;j++)
            {
                if (arr[i][j]=='R') count++;
            }
            if (count==8) {flag=1; break;}
            count=0;
        }
        if (flag==0) cout<<"B"<<endl;
        else cout<<"R"<<endl;
    }
}