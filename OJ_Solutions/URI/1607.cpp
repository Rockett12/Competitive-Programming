
#include <iostream>
#include <cmath>
#define $ ios::sync_with_stdio(0);

using namespace std;
int dist[100];
void pprocess()
{
    dist[0] = dist[26] = 'a';
    dist[1] = dist[27] = 'b';
    dist[2] = dist[28] = 'c';
    dist[3] = dist[29] = 'd';
    dist[4] = dist[30] = 'e';
    dist[5] = dist[31] = 'f';
    dist[6] = dist[32] = 'g';
    dist[7] = dist[33] = 'h';
    dist[8] = dist[34] = 'i';
    dist[9] = dist[35] = 'j';
    dist[10] = dist[36] = 'k';
    dist[11] = dist[37] = 'l';
    dist[12] = dist[38] = 'm';
    dist[13] = dist[39] = 'n';
    dist[14] = dist[40] = 'o';
    dist[15] = dist[41] = 'p';
    dist[16] = dist[42] = 'q';
    dist[17] = dist[43] = 'r';
    dist[18] = dist[44] = 's';
    dist[19] = dist[45] = 't';
    dist[20] = dist[46] = 'u';
    dist[21] = dist[47] = 'v';
    dist[22] = dist[48] = 'w';
    dist[23] = dist[49] = 'x';
    dist[24] = dist[50] = 'y';
    dist[25] = dist[51] = 'z';

}
int main()
{$
    int n, resp;
    string a, b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        resp =0;
        for(int i = 0; i<(int)a.size() && i <(int)b.size(); ++i)
        {
            if(a[i]>b[i])
            {
                resp += (int)(b[i]+'z'-a[i]-'a')+1;
            }
            else
                resp += (int)(b[i]-a[i]);
        }

        cout<<resp<<endl;
    }
}
