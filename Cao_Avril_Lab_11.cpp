// Avril Cao
// November 12, 2024
// Lab 11

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int ARRAY_SIZE = 50;
   	double alpha[ARRAY_SIZE];
    int i;
    int a;

for (i = 0; i < 24; i++)
{
    alpha[i];
    alpha[i] = i * i;
}

for (i = 25; i > 24 && i < 50; i++)
{
    alpha[i];
    alpha[i] = i * 3;
}

for (i = 0; i < 50; i++)
{
    cout << alpha [i] << " ";
    if ((i == 9) || (i == 19) || (i == 29) || (i == 39) || (i == 49))
    cout << endl;
}

    srand(time(0));
    int direct;
    direct = rand() % 100 + 1;

for (a = 0; a < 50; a++)
    cout alpha[a] = rand() % 100 + 1;

    return 0;
}
