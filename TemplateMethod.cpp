#include<iostream>
#include "tea.h"
#include "coffe.h"

using namespace std;

int main(int argc, char* argv[])
{
    Tea* tea = new Tea();
    Coffe* coffe = new Coffe();

    cout << "\nMaling tea..." << endl;
    tea->prepareRecipe();

    cout << "\nMaking coffe..." << endl;
    coffe->prepareRecipe();
}