#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int x,y;
    float a;
    cin>>x>>y;

    if(x=1){
        a=4.00;
    }
    else if(x=2)
    {
        a=4.50;
    }
    else if (x=3)
    {
        a=5.00;
    }

    //double total=y*a;


    cout<<fixed<<setprecision(2);
    //cout<<"R$ "<<total<<endl;
   cout<<a;
 return 0;
}
