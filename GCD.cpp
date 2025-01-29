#include <iostream>

using namespace std;

int gcd(int,int);

int main(){
    unsigned int t;
    long int a, b;
    cout<<"enter Two number(a>=0 && b<=1000000):";
    cin >> a >> b;
    cout << gcd(a,b) << endl;
    return 0;
} 

int gcd(int a, int b)
{
 
    if(a!=0 && a!=1)
    {      
            int x=((a+b)+abs(a-b))/2;
            int y=((a+b)-abs(a-b))/2;
            a=x;b=y;
            gcd(a%b,b);

    }
    else if(a==0) return b;
    else return 1;
}