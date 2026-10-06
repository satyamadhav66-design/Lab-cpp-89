#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("sample.txt", ios::app);
    if (fout.is_open())
    {
        while (true)
        {
            getline(cin, line);

            if (line == "-1")
                break;

            fout << line << endl;
        }
    }
    fout.close();
    ifstream fin;
    fin.open("sample.txt", ios::in);
    if (fin.is_open())
    {
        while (getline(fin, line))
        {
            cout << line << endl;
        }
    }
    fin.close();
    return 0;
}
