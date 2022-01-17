#include<iostream>
#include <math.h>

int main(){
    int n, order=0, n1, data=0, val;
    std::cin>> n;
    n1=n;
    val=n;
    while(n1!=0){
        ++order;
        n1=n1/10;
    }
    while(n!=0){
        int num = n%10;
        data = data + pow(num, order);
        n = n/10;
    }
    if(data == val){
        std::cout<<"Number is an Amstrong number";
    }
    else
        std::cout<<"Number is not an Amstrong number";
return 0;
}
