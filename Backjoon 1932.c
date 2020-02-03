#include<iostream>

int MAX(int x, int y);

int main()
{
    int tri[501][501];
    int len;
    std::cin >> len;
    
    for(int i=1; i<=len; i++){
        for(int j=1; j<=i; j++){
            std::cin >> tri[i][j];
        }
    }
    
    for(int i=len; i>=2; i--){
        for(int j=1; j<i; j++){
            tri[i-1][j] += MAX(tri[i][j], tri[i][j+1]);
        }
    }
    
    std::cout << tri[1][1];
}

int MAX(int x, int y)
{
    if(x>y) return x;
    return y;
}
