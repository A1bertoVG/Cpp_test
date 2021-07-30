#include <iostream>

using namespace std;

int main()
{
    string s = "hello";
    //H is in the index 0
    //O esta en el index s.size()-1
    string s_inverted = "";

    for (int i = s.size() - 1; i >= 0; --i)
    {
        s_inverted += s[i];
    }

    cout << s_inverted;
}
