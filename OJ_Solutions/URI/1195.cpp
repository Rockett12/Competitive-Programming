#include <cstdio>
#define MAXN 512
using namespace std;
int cur, left[MAXN], right[MAXN], tree[MAXN], vl[MAXN], vr[MAXN], TC = 0;

void postorder(int root)
{
    if(vl[root]==TC) postorder(left[root]);
    if(vr[root]==TC) postorder(right[root]);
    printf(" %d", tree[root]);
}
void preorder(int root)
{
    printf(" %d", tree[root]);

    if(vl[root]==TC) preorder(left[root]);
    if(vr[root]==TC) preorder(right[root]);
}

void inorder(int root)
{
    if(vl[root]==TC) inorder(left[root]);

    printf(" %d", tree[root]);

    if(vr[root]==TC) inorder(right[root]);
}


int main()
{
    int n, c, k, root;
    bool f;

    scanf("%d", &c);
    while(c--)
    {
        cur = 1;
        ++TC;
        scanf("%d", &n);
        while(n--)
        {
            scanf("%d", &k);
            f = 1;
            root = 0;
            while(f)
                if(k<tree[root])
                    if(vl[root]<TC)
                        left[root] = cur, vl[root] = TC, f = 0;
                    else
                        root = left[root];
                else
                    if(vr[root]<TC)
                        right[root] = cur, vr[root] = TC, f = 0;
                    else
                        root = right[root];

            tree[cur++] = k;
        }

        printf("Case %d:\n", TC);
        printf("Pre.:"); preorder(right[0]); puts("");
        printf("In..:"); inorder(right[0]);puts("");
        printf("Post:"); postorder(right[0]);puts("\n");

    }
}
