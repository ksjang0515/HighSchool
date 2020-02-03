#include<iostream>

int main()
{
    int fibonacci[41][2] = {0, };
    
    fibonacci[0][0] = 1;
    fibonacci[0][1] = 0;
    fibonacci[1][0] = 0;
    fibonacci[1][1] = 1;
    
    for(int i=2; i<=40; i++){
        fibonacci[i][0]=fibonacci[i-1][0] + fibonacci[i-2][0];
        fibonacci[i][1]=fibonacci[i-1][1] + fibonacci[i-2][1];
    }
    
    int num;
    std::cin >> num;
    
    for(; num>0; num--){
        int a;
        std::cin >> a;
        std::cout << fibonacci[a][0] << " " << fibonacci[a][1] << std::endl;
    }
}
