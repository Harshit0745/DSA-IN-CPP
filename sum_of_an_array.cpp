#include <iostream>
using namespace std;
int sum(int a[], int n){
    int summ=0;
    for(int i=1 ; i<=n-1;i++){
        summ=summ+a[i];
    }
    cout<<summ;
}

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    cout<<sum<<(a,n)<<endl;
    return 0;

}