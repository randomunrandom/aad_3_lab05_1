/*
 * created by Danil Kireev, PFUR NFI-201, 20.09.18, 09:00
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"

using namespace std;

/*
 * № 17
 * Дан массив размера N и целые числа K и L.
 * Найти сумму всех элементов массива, кроме
 *  элементов с номерами от K до L включительно и
 *  произведение их индексов.
 */

int main() {
    cout << "нахождение суммы элементов массива кроме номеров от K до L" << endl;
    Q z;
    int res1=0, res2=1;
    z.user_input();
    z.print();
    res1 = z.search(&res2);
    cout << "сумма элементов массива кроме носеров ок K до L = " << res1;
    cout << ", а произведение их индексов = " << res2;
    return 0;
}