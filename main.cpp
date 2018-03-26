#include <iostream>

using namespace std;

float potencia (int x, int y)
{
    float produto = 1.0;
    if (y > 0)
    {
        for (int i=1; i<=y; i++)
        {
            produto*=x;
        }
    }
    if (y < 0)
    {
        for (int i=-1; i>=y; i--)
        {
            produto*=x;
        }
        produto = (1/produto);
    }
    return produto;
}
int main()
{
    float x, y;
    cout << "Digite a base e o expoente" << endl;
    cin >> x >> y;
    cout << "Potencia de " << x << " elevado a " << y << " igual a " << potencia(x, y);
    return 0;
}
