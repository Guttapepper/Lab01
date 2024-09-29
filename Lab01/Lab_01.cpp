#include <iostream>

using namespace std;

int main()
{
    // Task begin 3 : 
    //Дано сторони прямокутника a і b. Знайти його площу S = a · b і периметр
    //P = 2 · (a + b).

    float a, b, area, perimeter; //declaration
    cout << "\n________Begin 3________" << endl << endl;

    //Input
    cout << "side a = ";
    cin >> a;
    cout << "side b = ";
    cin >> b;

    //Calculation
    area = a * b;
    perimeter = 2 * (a + b);

    //Output
    cout << "Area of a rectangle = " << area << endl;
    system("pause");

    cout << "Perimeter of a rectangle = " << perimeter << endl;
    system("pause");



    //Task begin 11 :
    //Дана довжина L окружності. Знайти її радіус R і площу S круга, обмеженого цим
    //колом, враховуючи, що L = 2 · π · R, S = π · R2
    //Значення π вважати рівним 3.14.

    cout << "\n________Begin 11________" << endl << endl;

    float R, L, S; //declaration
    const double pi = 3.14; //Constant Var

    //Input
    cout << "R = ";
    cin >> R;
  

    //Calculation
    L = 2 * pi * R;
    S = pi * R * R;

    //Output
    cout << "L = " << L << endl;
    cout << "S = " << S << endl;

    return 0;

}