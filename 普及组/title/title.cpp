#include <cstdio>
#include <string>
using namespace std;

int main()
{
    FILE *in,*out;
    string s;
    int count=0;
    in=fopen("title.in","r");
    out=fopen("title.out","w");
    fscanf(in,"%s",&s);
    for(int i=1;i<=s.length();i++)
    {
        if((s[i]>=48&&s[i]<=57)||(s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
        {
            count++;
        }
    }
    fprintf(out,"%d",count);
    fclose(in);
    fclose(out);
    return 0;
}