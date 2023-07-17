///******** Bismillahir Rahmanir Rahim *******

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007


void usool()
{
  int n;
  bool semi=1;
  cin>>n;
  string s;
  cin>>s;
  unordered_map<char,int> m;
  for(int i=0;i<n;i++)
  {
    m[s[i]]++;
  }
  int odd=0,even=0;
  for(auto it:m)
  {
      if(it.second%2!=0)
       odd++;
      else
       even++;
  }
  if( (n%2 && odd>1) || (n%2==0 && odd))
    semi=0;

   if(!semi)
    cout<<0<<endl;
   else
   {
       if(n%2==0 || (n%2 and m.size()>=2) )
        cout<<1<<endl;
       else
        cout<<2<<endl;
   }


}

int main()
{
   int t;
   cin>>t;
    while(t--)
    {
      usool();
    }

  return 0;
}

