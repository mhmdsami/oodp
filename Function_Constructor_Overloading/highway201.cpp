#include<iostream>
typedef long long int ll;
using namespace std;
int find_set(int v){return 0;}
void union_sets(int a){}
void union_sets(int a,int b){}
int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll sum =0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        ll r = sum%n;
        cout<<r*(n-r)<<endl;
    }
    return 0;
}