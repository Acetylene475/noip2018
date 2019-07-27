#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    FILE *in,*out;
    char s[127];
    int count=0;
    in=fopen("title.in","r");
    out=fopen("title.out","w");
    fscanf(in,"%s",&s);
    for(int i=0;s[i]!=EOF;i++)
    {
        if((s[i]>='0'&&s[i]<='9')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            count++;
        }
    }
    fprintf(out,"%d\n",count);
    fclose(in);
    fclose(out);
    return 0;
}