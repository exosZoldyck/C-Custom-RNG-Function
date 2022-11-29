#include <iostream>
using namespace std;



int rng(int min, int max)
{
    int randomNumber, rngh(0), loopnum(0), looptimes, result, dif = abs((max - min) + 1);
    srand(time(0)); looptimes =(((rand() % 100) + dif) % 100); 
    
    loop:
    srand(time(0));
    rngh = rngh + rand();
    if (rngh > 10000000000000) {rngh = 10000;}
    
    randomNumber = ((abs(rand() + rngh - (rngh / 2))) % dif);
    
    result = min + randomNumber;
    
    loopnum++;
    if (loopnum == looptimes) { return result; }
    
    goto loop;
}



int main()
{
    int min, max;
    cout << "min = "; cin >> min;
    cout << "max = "; cin >> max;
    
    cout << rng(min, max);
}