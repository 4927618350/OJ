#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<vector>
#include<iomanip>
using namespace std;
namespace io
{
    inline void read(int &x)
    {
        x=0;
        register short flag=1;
        register char ch=getchar();
        while(ch<'0'||ch>'9')
        {
            if(ch=='-')
            {
                flag=-1;
            }
            ch=getchar();
        }
        while (ch>='0'&&ch<='9')
        {
            x=(x<<3)+(x<<1)+(ch^48);
            ch=getchar();
        }
        x*=flag;
    }
    inline void write(int x)
    {
        if(x<0)
        {
            putchar('-');
            x=-x;
        }
        if(x>9)
        {
            write(x/10);
        }
        putchar(x%10+'0');

    }
}
using io::read;
using io::write;
int main()
{
    ios::sync_with_stdio(0);
    freopen("file.in","r",stdin);
    freopen("file.out","w",stdout);
    return 0;
}