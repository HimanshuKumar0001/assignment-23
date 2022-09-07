#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[]={4,8,11,12,2,3,7,9,17,21};
    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}
