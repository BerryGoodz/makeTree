#include <iostream>

using namespace std;
void makeTreePractice(int n)//visualizing the loops used in makeTree function
{
    for(int i = 0; i < 10; i ++) cout << " ";
    cout << 'a' << endl;

    for(int i = 0; i < 9; i ++) cout << " ";
    for(int i = 0; i < 1; i ++)
    {
        cout << '/' << " " << '\\' << " ";
    }
    cout << endl;

    for(int i = 0; i < 8; i ++) cout << " ";
    cout << 'a';
    for(int j = 0; j < 1; j ++)
    {
        for(int i = 0; i < 3; i ++) cout << " ";
        cout << 'a';
    }
    cout << endl;

    for(int i = 0; i < 7; i ++) cout << " ";
    for(int i = 0; i < 2; i ++)
    {
        cout << '/' << " " << '\\' << " ";
    }
    cout << endl;

    for(int i = 0; i < 6; i ++) cout << " ";
    cout << 'a';
    for(int j = 0; j < 2; j ++)
    {
        for(int i = 0; i < 3; i ++) cout << " ";
        cout << 'a';
    }
    cout << endl;
}
void makeTree(int n)// n determines number of lines that contain leaf nodes
{
    if(n < 1) return;
    n -= 1;
    int space = n * 2;//number of blank spaces per line.
    int ctrNumber = 0;//determines general number of characters in a line.
    for(int i = 0; i < space; i ++) cout << " ";// blank spaces for the first line of tree.
            cout << 'a' << endl;
    for(int p = 0; p < n; p ++)//loop for the rest of the tree
    {
        for(int i = 0; i < space - 1; i ++) cout << " ";
        for(int i = 0; i < ctrNumber + 1; i ++)
            {
                cout << '/' << " " << '\\' << " ";
            }
            cout << endl;
        for(int i = 0; i < space - 2; i ++) cout << " ";
            cout << 'a';
        for(int j = 0; j < ctrNumber + 1; j ++)
        {
            if(p == n - 1)//make bottom leaf nodes connect sideways
            {
                cout << " " << "_" << " ";
                cout << 'a';
            }
            else
            {
                for(int i = 0; i < 3; i ++) cout << " ";
                cout << 'a';
            }
        }
        cout << endl;
        ctrNumber ++;
        space -= 2;
    }
}
int main()
{
    makeTree(10);
    return 0;
}
