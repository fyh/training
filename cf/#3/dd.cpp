#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
    string str;
    priority_queue<pair<int,int> > Q;
    long long b=0,p=0,x,y,i;
    cin>>str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]=='(')b++;
        else if(str[i]==')')b--;
        else
        {
            b--;
            cin>>x>>y;
            p+=y;
            str[i]=')';
            Q.push(make_pair(y-x,i));
        }

        pair<int,int> t;
        if(b<0)
        {
            if(Q.empty())break;
            t=Q.top();
            Q.pop();
            b+=2;
            str[t.second]='(';
            p-=t.first;
            cout << t.first << ", " << t.second << endl;
        }
    }
    if(b!=0)cout<<-1<<endl;
    else
    {
        cout<<p<<endl;
        cout<<str<<endl;
    }
    //for(;;);

}
