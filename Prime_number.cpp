#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%2==0){
        cout<<"Not Prime";
            break;
        }
    }
    if(i==n){
        cout<<"Prime";
    }
}