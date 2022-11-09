#include<bits/stdc++.h>
#include<set>
#include<string.h>
#include<iterator>

using namespace std;

int main()
{

    set<string>ch;
    string s,op ;
    int i,to=0,j,len;
    cout<<"input your program :"<<endl;

    getline(cin,s);

    len=s.size();


    while(s[i]!='{'){
        getline(cin, s);
        len=s.size();
    }

    while(len>0)
    {

        for(i=0;i<len;i++)
        {

            if(s[i]=='=')
            {
                if(s[i+1]=='=')
            {
                op="==";
                i++;
                to++;
            }

            else {op="=";
            to++;
            }
            ch.insert(op);


        }



        //< operator
        else if (s[i]=='<')
        {
            if(s[i+1]=='<' || s[i+1]=='>')
            {
                i++;
                continue;
            }
            else if (s[i]=='=')
            {
                op="<=";
                i++;
                to++;
            }
            else {
                op="<";
                to++;
            }
            ch.insert(op);
        }


                //> operator
        else if (s[i]=='>')
        {
           if(s[i+1]=='<' || s[i+1]=='>')
            {
                i++;
                continue;
            }
            else if (s[i]=='=')
            {
                op="=>";
                i++;
                to++;
            }
            else {
                op=">";
                to++;
            }
            ch.insert(op);
        }




        //- operaor

        else if (s[i]=='-')
        {
            if(s[i+1]=='-'){
                op="--";
                i++;
                to++;
            }

            else if(s[i+1]=='=')
            {
                op="-=";
                i++;
            }
            else {
                to++;
                op="-";
            }

            ch.insert(op);
        }




            //+ operaor

        else if (s[i]=='+')
        {
            if(s[i+1]=='+'){
                op="++";
                i++;
                to++;
            }

            else if(s[i+1]=='=')
            {
                op="+=";
                i++;
            }
            else {
                to++;
                op="+";
            }

            ch.insert(op);
        }

        //* operator

        else if(s[i]=='*')
        {
            if(s[i+1]=='=')
            {
                op="*=";
                i++;
                to++;
            }
            else {
                to++;
                op="*";
            }
            ch.insert(op);
        }


                //   / operator

        else if(s[i]=='/')
        {
            if(s[i+1]=='=')
            {
                op="/=";
                i++;
                to++;
            }
            else {
                to++;
                op="/";
            }
            ch.insert(op);
        }
        }

        getline(cin,s);
    len=s.size();

    }
    cout<<"program"<<endl;
for(auto j=ch.begin() ; j!=ch.end(); j++)
{
    cout<<*j<<"  ";
}

cout<<endl<<"total : "<<to;

}
