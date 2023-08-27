#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t, n, ans, i, j, min_v;
    string a;

    cin>>t;

    while (t--)
    {
        cin>>n;
        cin>>a;

        ll box[n];

        for(i=0; i<n; i++)
        {
            cin>>box[i];
        }
        ans=0;
        for(i=n-1; i>=0; )
        {
            cout<<"1st loop "<<endl;
            cout<<"-----------------------------"<<endl;

            if(a[i]=='1')
            {
                min_v=box[i];
                while(i>=0)
                {
                    cout<<"2nd loop "<<endl;
                    cout<<"-----------------------------"<<endl;
                    min_v=min(min_v, box[i]);    /// 0  1 1 1 0
                                                ///  10 5 8 9 6
                    cout<<"min_v=min(min_v, box[i]);"<<min_v<<endl;
                    cout<<"min_v=min(min_v, box[i]);"<<box[i]<<endl;
                    if(a[i]=='1')
                    {
                        ans=ans+box[i];
                        cout<<"a[i]=='1'  ans=ans+box[i]; "<<box[i]<<endl;
                        i--;
                    }
                    else
                    {
                        ans=ans+box[i];
                        cout<<"ans=ans+box[i]; "<<box[i]<<endl;
                        i--;
                        ans=ans-min_v;
                        cout<<" ans=ans-min_v; "<<min_v<<endl;
                        break;
                    }
                }
            }
            else
            {
                i--;
            }
        }

        cout<<ans<<"\n";
    }
}

