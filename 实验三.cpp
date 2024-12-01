
//#include <iostream>
//using namespace std;
//int gcd(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//void gcdAndLcm(int a, int b, int& gcdResult, int& lcmResult) {
//    gcdResult = gcd(a, b);
//    lcmResult = (a * b) / gcdResult;
//}
//int main()
//{
//    int m, n;
//    cout << "输入m" << endl;
//    cin >> m;
//    cout << "输入n" << endl;
//    cin >> n;
//    
//    int greatestCommonDivisor = gcd(m, n);
//    cout << m << "和" << n << "的最大公约数是: " << greatestCommonDivisor << endl;
//    int gcdResult, lcmResult;
//    gcdAndLcm(m, n, gcdResult, lcmResult);
//    cout << m << "和" << n << "的最大公约数是: " << gcdResult << endl;
//    cout << m << "和" << n << "的最小公倍数是: " << lcmResult << endl;
//    return 0;
//
//}











//#include <iostream>
//#include <iomanip>
//using namespace std;
//bool is_prime(int num) {
//    if (num <= 1) {
//        return false;
//    }
//    if (num <= 3) {
//        return true;
//    }
//    if (num % 2 == 0 || num % 3 == 0) {
//        return false;
//    }
//
//    for (int i = 5; i * i <= num; i += 6) {
//        if (num % i == 0 || num % (i + 2) == 0) {
//            return false;
//        }
//    }
//
//    return true;
//}
//int main()
//{
//    int count = 0;
//
//    cout << "前200个素数如下：" << endl;
//
//    for (int i = 2; count < 200; i++) {
//        if (is_prime(i)) {
//            cout << setw(6) << i;
//            count++;
//            if (count % 10 == 0) {
//                cout << endl;
//            }
//        }
//    }
//    return 0;
//
//}




//#include "mytriangle.h"
//
//int main() {
//    double side1, side2, side3;
//
//    std::cout << "请输入三角形的三条边长：" << std::endl;
//    std::cin >> side1 >> side2 >> side3;
//
//    if (is_valid(side1, side2, side3)) {
//        double triangleArea = area(side1, side2, side3);
//        std::cout << "该三角形的面积为：" << triangleArea << std::endl;
//    }
//    else {
//        std::cout << "输入的边长无法构成三角形，请重新输入。" << std::endl;
//    }
//
//    return 0;
//}





#include <iostream>
using namespace std;
int monkeyPeach(int day) {
    if (day == 10) {
        return 1;
    }
    else {
        return (monkeyPeach(day + 1) + 1) * 2;
    }
}
int main()
{
    
    int firstDayPeach = monkeyPeach(1);
    std::cout << "第一天猴子共摘了 " << firstDayPeach << " 个桃子。" << std::endl;

    return 0;

}