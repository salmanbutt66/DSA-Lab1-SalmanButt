#include<iostream>
#include<string>
using namespace std;

int search(string txt,string pat)
{
    int n = txt.length(), m = pat.length();
    for(int i=0;i<=n-m;i++)
    {   int j;
        for ( j = 0; j < m; j++)
        {
            if(txt[i+j]!=pat[j])
            {
                break;
            }
        }    
        if(j==m)
        {
            return i;
        }   
    }
    return -1;
}
int main()
{
    string txt;
    string pattern;
    cout<<"Enter your text string: "<<endl;
    getline(cin,txt);
    cout<<"Enter the pattern to search in the string: ";
    getline(cin,pattern);

    int index = search(txt, pattern);

    if (index != -1)
        cout << "First occurrence at index: " << index << endl;
    else
        cout << "Pattern not found!" << endl;

    return 0;
}