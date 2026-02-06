#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> text_history;
    vector<string> redo_stack;

    while (n--)
    {
        string operation;
        cin >> operation;

        if (operation == "TYPE")
        {
            string val;
            cin >> val;
            text_history.push_back(val);
            redo_stack.clear();
        }
        else if (operation == "UNDO")
        {
            if (!text_history.empty())
            {
                redo_stack.push_back(text_history.back());
                text_history.pop_back();
            }
        }
        else if (operation == "REDO")
        {
            if (!redo_stack.empty())
            {
                text_history.push_back(redo_stack.back());
                redo_stack.pop_back();
            }
        }
    }

    for (const string &s : text_history)
    {
        cout << s;
    }

    return 0;
}