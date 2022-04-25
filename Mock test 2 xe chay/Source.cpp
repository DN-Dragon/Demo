
#include <cmath>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int move(string moves)
{
    int x = 0, y = 0;
    for (int i = 0; i < moves.length(); i++)
    {
        ++i;
        string b;
        b = moves[i];
        int s = stoi(b);
        if (moves[i-1] == 'U')
            y += s;
        if (moves[i-1] == 'D')
            y -= s;
        if (moves[i-1] == 'L')
            x -= s;
        if (moves[i-1] == 'R')
            x += s;
    }

    return round(sqrt(pow(x, 2) + pow(y, 2)));

}

bool isPrime(int n)
{
    if (n == 1) return 0;
    if (n == 2) return 1;
    for (int i = 2; i < n; ++i)
        if (n % i == 0) return 0;
    return 1;



}

bool isSquared(int n)
{
    int a = sqrt(n);
    if (a * a == n) return 1;
    return 0;



}

int main()
{
    string moves;
    int distance;
    bool primality, squared;

    cin >> moves;
    
    distance = move(moves);

    cout << "Khoang cach xe da di chuyen tu vi tri ban dau toi diem hien tai: "
        << distance << '\n';


   
    primality = isPrime(distance);
    

    

    squared = isSquared(distance);

   

    if (primality) {
        cout << "So " << distance << " la so nguyen to\n";
    }
    if (squared) {
        cout << "So " << distance << " la so chinh phuong\n";
    }

    return 0;
}