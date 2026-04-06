/*
The objective of this assignment is to develop a program that processes a given integer based on specific mathematical rules, tracks the sequence generated until it reaches 1, and identifies both the step count and the peak value during the process. You will practice functional decomposition in C++, specifically handling loops, conditional logic, and basic I/O operations using std::cin and std::cout. 

1. Function Requirements 

The program must implement the following three functions with the specified prototypes: 

● int nextValue(int x); 
○ Description: Calculates the subsequent value in the sequence. 
○ Logic: Returns x / 2 if x is even, and 3x + 1 if x is odd.

● int countSteps(int x); 
○ Description: Calculates the total number of iterations required for the value to reach 1. 
○ Logic: Repeatedly calls nextValue within a loop and returns the total count of steps taken. 

● int maxInProcess(int x); 
○ Description: Identifies the highest integer reached during the entire sequence. 
○ Logic: Tracks every value generated during the transition to 1 and returns the maximum value encountered.

2. Main Function (main) Workflow 

The main function should serve as the entry point and perform the following: 

1. Prompt the user to input a positive integer. 
2. Call the countSteps function to retrieve the total steps. 
3. Call the maxInProcess function to retrieve the peak value. 
4. Display the results in the following format: 
○ Adim sayisi: [Result] (Step count) 
○ Maksimum değer: [Result] (Maximum value)

Example Execution

Input: 6 

Sequence Process: 

6 → 3 → 10 → 5  → 16 → 8 → 4 → 2 → 1 

Expected Output:

Adim sayisi: 8 

Maksimum değer: 16 
*/

#include <iostream>
using namespace std;

int nextValue(int x);
int countSteps(int x);
int maxInProcess(int x);

int main() {
    int n;
    cout << "Pozitif bir tamsayi giriniz: ";
    cin >> n;

    int steps = countSteps(n);
    int maxValue = maxInProcess(n);

    cout << "Adim sayisi: " << steps << endl;
    cout << "Maksimum deger: " << maxValue << endl;

    return 0; 
}

int nextValue(int x) {
    if (x % 2 == 0) {
        return x / 2;
    } else {
        return 3 * x + 1;
    }
}

int countSteps(int x) {
    int steps = 0;
    while (x != 1) {
        x = nextValue(x);
        steps++;
    }
    return steps;
}

int maxInProcess(int x) {
    int maxValue = x;
    while (x != 1) {
        x = nextValue(x);
        if (x > maxValue) {
            maxValue = x;
        }
    }
    return maxValue;
}
