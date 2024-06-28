#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>
#include <cstring>

//Lista 1 - Exercício 1

using namespace std;

int main()
{
  int x,y;
  for(x=1; x <= 9; x++)
  {
     for(y=1; y <= 10; y++) {
        if (y == 10) {
           cout << x << "  * " << y << "  = " << x*y << " |  ";
        } else {
           cout << x << "  * " << y << "  = " << x*y << " |  ";
        }
     }
     cout << endl;
  }
  system("pause");
}
