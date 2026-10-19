#include <cmath>
#include <iostream>

int main(){
    double angle;
    std::cout <<"Введите угол"<<std::endl;
    std::cin >> angle;

    double res1;
    if(std::cos(2*angle)!=1){
        res1=
            (1+std::sin(2*angle))
            /
            (1-std::cos(2*angle));   
        std::cout<<"F(x1)="<<res1<<std::endl;}
    else std::cout<<"неверный ввод для F(x1) "<<std::endl;

    double res2;
    if(std::tan(angle)!=1){
        res2=
            (1+std::tan(angle)*std::tan(angle))
            /
            (1-std::tan(angle)*std::tan(angle));
        std::cout<<"F(X2)="<<res2<<std::endl;}
    else std::cout<<"неверный ввод для F(x2) "<<std::endl;
    return 0;
}