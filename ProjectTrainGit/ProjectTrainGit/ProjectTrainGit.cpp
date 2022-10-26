// ProjectTrainGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include "Traim.h"
using namespace std;


int main()
{
    int SIZE = TRAIN::SIZE;
    TRAIN** train = new TRAIN * [SIZE];
    int counter = 1;
    for(int i=0;i<SIZE;i++)
    {
        train[i] = new TRAIN;
        Create(train[i]);
        cout << "Init poizda " << counter << endl;
        Init(train[i]);
        cout << endl;
        counter++;
    }
  for(int j=0;j<SIZE;j++)
  {
      Print(train[j]);
  }
  int ch = 0;

    cout << "Vvedit nomer poyizda pro yakuy hochete pobachutu inf: ";
    cin >> ch;
    cout << endl;

for(int a=0;a<SIZE;a++)
{
    if(train[a]->num==ch)
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        Print(train[a]);
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    }

}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
