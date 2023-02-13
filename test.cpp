#include<iostream>
#include<string>

using namespace std;

// Function to Sum integers Present in String
int Test(string s)
{
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            char ch=s[i];
            int x=int(ch) - 48 ;
            sum+=x;
        }
    }
    return sum;
}

int main()
{
    string s;
    cin>>s;

    //Function Call
    
    cout<<Test(s)<<endl;
    return 0;
}