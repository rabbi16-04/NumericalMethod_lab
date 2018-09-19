#include<bits/stdc++.h>
 
using namespace std;
 
//function used is x^3-x-1

class Bisection {
    public:
        int a;
    public: 
        int b;

     void bisection(double a,double b)
    {
        if(func(a) * func(b) >= 0)
        {
            cout<<"Incorrect a and b";
            return;                                                                       
        }
 
        c = a;
    
        while ((b-a) >= tolarence)
        {
            c = (a+b)/2;
            if (func(c) == 0.0){
                cout << "Root = " << c<<endl;
                break;
            }
            else if (func(c) * func(a) < 0){
                    cout << "Root = " << c<<endl;
                    b = c;
            }
            else{
                    cout << "Root = " << c<<endl;
                    a = c;
            }
        }
    }

    double func(double x)
    {
        return x*x*x - x - 1;
    }

    double tolarence = 0.0000001;
    double c;
};
 
 

 
int main()
{
    Bisection ob;
    ob.a=-10;
    ob.b=20;
 
    cout<<"The function used is x^3-x-1\n";
    cout<<"a = "<<ob.a<<endl;
    cout<<"b = "<<ob.b<<endl;
    ob.bisection(ob.a,ob.b);
    cout<<"\n";
    cout<<"Accurate Root calculated is = "<<ob.c<<endl;
 
    return 0;
}
