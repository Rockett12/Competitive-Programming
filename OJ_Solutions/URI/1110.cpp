#include <iostream>
#include <queue>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_
    int n, a;
    queue<int> q;
    vector<int> vec;
    while((cin>>n)&&n)
    {

        for(int i = 1; i<=n; ++i)
            q.push(i);

        cout<<"Discarded cards:";
        a=0;
        while((int)q.size()>1)
        {
            if(a)
                cout<<",";

            cout<<" "<<q.front();
            q.pop();
            q.push(q.front());
            q.pop();
            a=1;
        }
        cout<<endl;
        cout<<"Remaining card: "<<q.front()<<endl;
        q.pop();

    }

    return 0;
}

