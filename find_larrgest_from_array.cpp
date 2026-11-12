#include <iostream>
#include<climits>
using namespace std;
int main() {
    int a[]={1,2,3,23,25,232,553,432};
    int n=sizeof(a)/sizeof(int);
    int max=INT_MIN;
    for(int i=0;i<=n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max;
    return 0;
}
