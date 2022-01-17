#include<iostream>
int main(){
    int n ;
    std::cin>> n;
    if(n<1){
        std::cout<<0;
    }
    std::cout<<"Sum of first "<<n<<" numbers is "<< (n)*(n+1)/2;

return 0;
}
