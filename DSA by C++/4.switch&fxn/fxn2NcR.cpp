#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    } return fact;
}
int main(){
    int n,r;
    cout<< "enter n and r"<< endl; 
    cin>>n>>r;
    float ans = (factorial(n))/(factorial(r)*factorial(n-r));
cout<< "NcR is" << ans; 
}