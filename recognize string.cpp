#include<bits/stdc++.h>
using namespace std;
int main()
{
    int state=0,i,len;
    string s;
    cin>>s;
    len=s.size();
    for(i=0; i<len; i++)
    {
        if(state==0 && s[i]=='a')
            state=0;

        else if (state==0 || state==1 && s[i]=='b')
            state=1;

        else if(state==1 && s[i]=='a')
        {
            state = 2;
            break;
        }

        else if (s[i]!='a' || s[i]!='b')
        {

            state = 2;
            break;
        }

    }
    if(state ==1)
        cout<<"'"<<s<<"' is recognize as a*b+"<<endl;
    else
        cout<<"not recognize"<<endl;


    return 0;
}
