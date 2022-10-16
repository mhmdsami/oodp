#include <iostream>
#include <string>
using namespace std;
class Cricket {
public:
    int rn,innings;
    string name;
    Cricket(int r,string n,int inn) {
        rn=r;
        name=n;
        innings=inn;
    }
    void display() {
        cout<<"Jersey Num:"<<rn<<endl;
        cout<<"Name of the Player:"<<name<<endl;
        cout<<"No of Innings Played:"<<innings<<endl;
    }
};
int main()
{
    int r,r2, inn,inn2;
    string n,n2;
    cin>>r>>n>>inn;
    cin>>r2>>n2>>inn2;
    Cricket cricklib1(r,n,inn);
    cricklib1.display();
    Cricket cricklib2(r2,n2,inn2);
    cricklib2.display();
    return 0;
}