#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int stringcompare(string s,string l)
{
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(s[i]!=l[i])
        {
            count++;
        }
    }
    return count;

}
int main()
{
    int num;
    int count=0;
    cin>>num;
    vector<string> str(num);
    string love="codeforces";
    for(int i=0;i<num;i++)
    {
        cin>>str[i];
    }
    for(int j=0;j<num;j++)
    {
        cout<<stringcompare(str[j],love)<<endl;        
    }
    return 0;
}