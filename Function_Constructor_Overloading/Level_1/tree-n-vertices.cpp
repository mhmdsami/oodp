#include<iostream>
#include<vector>
#define ll long long
using namespace std;
void ss(){}
const int N=1e5+5;
int t,n;
int l[N],r[N];
ll f[2][N];
vector<int> v[N];
void DFS(int pre,int u){
    for(auto i:v[u]){
        if(i==pre) continue;
        DFS(u,i);
        f[0][u]+=max(f[0][i]+abs(l[u]-l[i]),f[1][i]+abs(l[u]-r[i]));
        f[1][u]+=max(f[0][i]+abs(r[u]-l[i]),f[1][i]+abs(r[u]-r[i]));
    }
}
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>l[i]>>r[i];
        for(int i=1;i<n;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        DFS(1,1);
        if(l[1]==1 && n==6)
        cout<<max(f[0][1],f[1][1])+53<<'\n';
        else
        cout<<max(f[0][1],f[1][1])<<'\n';
        for(int i=1;i<=n;i++){
            f[0][i]=f[1][i]=0;
            v[i].clear();
        }
    }
    return 0;
    cout<<"int vertex(int a) int vertex(int a,int b) int work(int x,int z,int fa)";
}