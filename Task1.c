#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <locale.h>
#include <iomanip>
#include <stdio.h>//подключение файлов, стандарт библиотека
using namespace std;// с помощью этой библиотеки подключает cout


int main()
{
    setlocale(LC_ALL, "ru");
    srand((unsigned)time (NULL));
    ///*printf("Привет!\n");*/
    //cout << endl << "ПРивет" << endl << endl;// endl = \n переход на новую строку
    //system("pause");
    //return 0;

    /*setlocale(LC_ALL, "rus");
    cout << setw(3) << "t" << setw(8) << 1234 << endl;

    cout << "t10=" << dec << 31 << endl;
    cout << "t8=" << oct << 31 << endl;
    cout << "t16=" << hex << 31 << endl;
    cout << endl <<  endl;

    cout << setprecision(2) << 123.45677 << endl;
    cout << setprecision(3) << 123.45677 << endl;
    cout << setprecision(4) << 123.45677 << endl;

    cout << endl << endl;
    cout << fixed;

    cout << setprecision(2) << 123.45677 << endl;
    cout << setprecision(3) << 123.45677 << endl;
    cout.unsetf(std::ios::floatfield);
    cout << setprecision(4) << 123.45677 << endl;
    cout << setfill('0') << setprecision(12) << 123.4567 << endl;
    cout << endl << endl;
    cout << scientific;
    cout << setprecision(2) << 123.45677 << endl;
    cout << setprecision(3) << 123.45677 << endl;
    cout << setprecision(4) << 123.45677 << endl;

    system("pause");
    return 0;*/
    //дан одномерный массив одномерный из 10 элементов подсчитать сутту отрицательных элементов массива
  
    int mas[10], i, sum = 0;
    cout << "Massive" << endl;
    for (int i = 0; i < 10; i++) 
    {
            mas[i] = rand() % 100 - 50;
            cout << setw(5) << mas[i];
            if (mas[i] < 0) sum = sum + mas[i];
     }

       cout << endl << "Summa=" << sum << endl;
   
    return 0;
    system("pause");



    int mas[10], i, sum = 0;
    cout << "Massive" << endl;
    for (int i = 0; i < 10; i++) 
    {
            mas[i] = rand() % 100 - 50;
            cout << setw(5) << mas[i];
            if (mas[i] < 0) sum = sum + mas[i];
     }
    cout << endl << "Пары" << endl;
    for (i = 0; i < 9; i++)
    {
        if (mas[i] > 0 && mas[i + 1] > 0) cout << mas[i] << "  " << mas[i + 1] << endl;
        }
       cout << endl << "Summa=" << sum << endl;
   
    return 0;
    system("pause");
}
