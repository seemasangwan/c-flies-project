#include<iostream>
using namespace std;
int main()
{   int sum=0;
    int arr[5];
    cout<<"enter marks of 5 subject"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    float per=sum/5;
    cout<<"percentage is "<<per;
    return 0;
}