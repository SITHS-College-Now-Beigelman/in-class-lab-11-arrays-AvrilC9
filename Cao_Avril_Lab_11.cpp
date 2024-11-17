// Avril Cao
// November 12, 2024
// Lab 11

#include <iostream>
#include <cstdlib>
#include <ctime>

// header file #include <iostream> to use cout and endl
// header file #include <cstdlib> to use srand and rand
// header file #include <ctime> to use number of times

using namespace std;

int main()
{
    const int ARRAY_SIZE = 50;
    double alpha[ARRAY_SIZE];
    int i;
    int index;
    int sum = 0;
    double average;
    double numElements = 0.0;

for (i = 0; i < 24; i++)
{
    alpha[i] = i * i;
}

// the first 25 components are equal to the square of the counter

for (i = 24; i < 50; i++)
{
    alpha[i] = i * 3;
}

// the last 25 components are equal to three times the counter

for (i = 0; i < 50; i++)
{
    cout << alpha [i] << " ";
    if ((i == 9) || (i == 19) || (i == 29) || (i == 39) || (i == 49))
    cout << endl;
}

// this prints the elements with 10 elements per line

    srand(time(0)); 
    index = rand() % 100 + 1;

// this generates random numbers between 1 and 100

for (index = 0; index < 50; index++)
{
    alpha[index] = rand() % 100 + 1;
    cout << alpha[index] << " ";
    sum = sum + alpha[index];
    if (alpha[index] == 100)
        numElements = alpha[index] + numElements;
}
cout << endl;

// this outputs a random element between 1 and 100, calculates the sum, and finds the number of elements equal to 100

average = sum / 50;

// this calculates the average which is the sum divided by the number of elements
    
cout << "The average of elements in the array: " << average << endl;

cout << "Elements exactly equal to 100: " << numElements << endl;

    return 0;
}

/* 0 1 4 9 16 25 36 49 64 81
100 121 144 169 196 225 256 289 324 361
400 441 484 529 0 75 78 81 84 87
90 93 96 99 102 105 108 111 114 117
120 123 126 129 132 135 138 141 144 147
51 75 6 12 23 23 58 90 81 44 39 83 85 32 34 62 77 15 61 76 82 70 80 19 4 23 78 16 60 87 59 83 36 69 44 21 55 51 59 47 61 83 49 49 41 24 97 25 38 92
The average of elements in the array: 52
Elements exactly equal to 100: 0 */
