#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1,s2;
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>s1>>s2;
        if(s1==s2)
            cout<<"="<<endl;
        else
        {
            int a= count(s1.begin(),s1.end(),'X');
            int b=count(s2.begin(),s2.end(),'X');
            if(s1=="M")
            {
                if(s2.substr(s2.size()-1)=="L")
                    cout<<"<"<<endl;
                else  if(s2.substr(s2.size()-1)=="S")
                    cout<<">"<<endl;
            }
           else if(s1.substr(s1.size()-1)=="L")
            {
                if(s2.substr(s2.size()-1)=="L"&&b>a)
                    cout<<"<"<<endl;
                else if(s2.substr(s2.size()-1)=="L"&&b<a)
                    cout<<">"<<endl;
                else  if(s2.substr(s2.size()-1)=="S")
                    cout<<">"<<endl;
                    else if(s2=="M")
                        cout<<">"<<endl;
            }

                else if(s1.substr(s1.size()-1)=="S")
            {
                if(s2.substr(s2.size()-1)=="L")
                    cout<<"<"<<endl;
                else if(s2.substr(s2.size()-1)=="S"&&b>a)
                    cout<<">"<<endl;
                else  if(s2.substr(s2.size()-1)=="S"&&b<a)
                    cout<<"<"<<endl;
                    else if(s2=="M")
                        cout<<"<"<<endl;
            }

        }
    }
}
