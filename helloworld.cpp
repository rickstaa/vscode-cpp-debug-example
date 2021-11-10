#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    msg.data();

    for (const string &word2 : msg)
    {
        cout << word2 << " ";
    }
    cout << endl;
}