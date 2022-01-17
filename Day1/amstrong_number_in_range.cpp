#include<iostream>
#include <math.h>

int main(){
    int order=0, n1, data=0, val, first, last, size=0;
    std::cin>>first;
    std::cin>>last;
    int list[last-first];
    for(int i=first; i<=last;i++){
    n1=i;
    val=i;
    int num1 = i;
    while(n1!=0){
        ++order;
        n1=n1/10;
    }
    while(num1!=0){
        int num = num1%10;
        data = data + pow(num, order);
        num1 = num1/10;
    }
    if(data == val){
        list[size]=val;
        size++;
    }
            order = data = 0;
    }
    std::cout<<"Amstrong number between "<< first << "and "<<last<< " : ";
    for(int i=0;i<size;i++){
        printf("%d ", list[i]);
    }
return 0;
}
