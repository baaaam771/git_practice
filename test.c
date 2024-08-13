#include <iostream>
#include <string>
#include <vector>

using namespace std;
string keyboard[4] = { "***ABCDE", "FGHIJKLM", "NOPQRSTU", "VWXYZ***" };
string destination[50];

int main(void)

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    for (int i = 0; i < N;i++)
        cin>> destination[i];

    string input;

    cin >> input;

    vector<char> possible;

    for (int i = 0; i < N;i++)
    {
        bool same = true;
        for(int j=0; j<input.size();j++)
            if (destination[i][j] != input[j])
            {
                same = false;
                break;

            }

        if(same)
            possible.push_back(destination[i][input.size()]);

    }

    for (int i = 0; i < 4;i++)
    {
        for (int j = 0; j <keyboard[i].size(); j++)
        {
            bool find = false;
            for (int k = 0; k <possible.size(); k++)
            {
                if (possible[k] == keyboard[i][j])
                {
                    find = true;
                    cout<< keyboard[i][j];
                    break;
                }

            }
            if(!find)
                cout<< '*';

        }
        cout<< "\n";
    }
    return 0;
}
