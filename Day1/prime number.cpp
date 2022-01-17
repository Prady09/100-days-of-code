#include<iostream>
int main(){
    int n;
    std::cin>> n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            std::cout<<"Number is not a prime number";
            return 0;
        }

    }
    std::cout<<"Number is a prime number";

return 0;
}
