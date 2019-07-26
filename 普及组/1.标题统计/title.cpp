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
        if((s[i]>='0'&&s[i]<='9')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            count++;
        }
    }
    fprintf(out,"%d",count);
    fclose(in);
    fclose(out);
    return 0;
}