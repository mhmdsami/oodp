#include <iostream>
#include <algorithm>
using namespace std;

class Encrypt
{
public:
    char arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    string solver(int x)
    {
        string res;
        while (x > 0)
        {
            int y = x % 16;
            res += arr[y];
            x /= 16;
        }
        return res;
    }
    string encryptString(string S)
    {
        char c = S[0];
        int cc = 1;
        string res;
        for (int i = 1; i < S.length(); i++)
        {
            if (S[i] == c)
                cc++;
            else
            {
                res += c;
                res += solver(cc);
                c = S[i];
                cc = 1;
            }
        }

        res += c;
        res += solver(cc);
        reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
    Encrypt enc;
    string str;
    cout << "ENTER STRING : ";
    cin >> str;
    cout << "ENCRYPTED : " << enc.encryptString(str);
}