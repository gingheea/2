// ProjectTrainGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct TRAIN
{
    static const int STR_SIZE = 256;
    static const int SIZE = 5;
    int num = 0;
    int hour = 0;
    int minute = 0;
    char* station = nullptr;
};
void Create(TRAIN* train)
{
    train->station = new char[train->STR_SIZE];
}
void Init(TRAIN* train)
{
    cout << "Nomer poyizda: ";
    cin>>train->num;
    cout << endl;
    cout << "Hoduna kolu poyizd vidpravuvsya: ";
    cin>>train->hour;
    cout << endl;
    cout << "Hvuluna kolu poyizd vidpravuvsya: ";
    cin>>train->minute;
    cout << endl;
    cout << "Yaka stanziya pruznachennya: ";
    cin>>train->station;
}
int main()
{
    int SIZE = TRAIN::SIZE;
    TRAIN** train = new TRAIN * [SIZE];
    for(int i=0;i<SIZE;i++)
    {
        train[i] = new TRAIN;
        Create(train[i]);
        Init(train[i]);
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
