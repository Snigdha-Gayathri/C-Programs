#include <iostream>
using namespace std;

int main(){
    int a=1;
    int b=2;
    int temp=a;
    a=b;
    b=temp;
    cout<<a;//2
    cout<<b;//1
}
