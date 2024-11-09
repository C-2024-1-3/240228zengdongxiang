//#include<iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	char a_char;
//	cout << "请输入一个字母：" << endl;
//	cin >> a_char;
//	if (islower(a_char))
//	{
//		cout << static_cast<char>(toupper(a_char)) << endl;
//	}
//	else {
//		cout << static_cast<int>(a_char + 1) << endl;
//	}
//	return 0;
//}







//#include<iostream>
//#include <iomanip>
//using namespace std;

//int main()
//{
//	double x, y;
//	cin >> x;
//	if (1> x > 0) {
//		y = 3 - (2 * x);
//		cout << y << endl;
//	}
//	else if (5 > x >= 1 ) {
//		y = 1 / (2 * x) + 1;
//		cout << y << endl;
//	}
//	else  {
//		y = x * x;
//		cout << y << endl;
//	}
//	return 0;
//}







//#include<iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	double x, y, z;
//	cout<<  "请输入第一条边" << endl;
//	cin >> x;
//	cout << "请输入第二条边" << endl;
//	cin >> y;
//	cout << "请输入第三条边" << endl;
//	cin >> z;
//	if (x + y < z) {
//		cout << "错误，不是三角形" << endl;
//	}
//	else if (x + z < y) {
//		cout << "错误，不是三角形" << endl;
//	}
//	else if (y + z < x) {
//		cout << "错误，不是三角形" << endl;
//	}
//	else {
//		double C;
//		C = x + y + z;
//		cout << C << endl;
//		if (x = y) {
//			cout << "是等腰三角形" << endl;
//		}
//		else if (x = z) {
//			cout << "是等腰三角形" << endl;
//		}
//		else if (y = z) {
//			cout << "是等腰三角形" << endl;
//		}
//		else if (x = y = z) {
//			cout << "是等腰三角形" << endl;
//		}
//		else {
//			cout << "不是等腰三角形" << endl;
//		}
//		
//
//	}
//	return 0;
//}























//#include <iostream>
//using namespace std;
//int main() {
//    double num1, num2;
//    char Symbol;
//    cout << "请输入第一个数字：";
//    cin >> num1;
//    cout << "请输入运算符（+、-、*、/、%）：";
//    cin >> Symbol;
//    cout << "请输入第二个数字：";
//    cin >> num2;
//    double result;
//    switch (Symbol) {
//    case '+':
//        result = num1 + num2;
//        break;
//    case '-':
//        result = num1 - num2;
//        break;
//    case '*':
//        result = num1 * num2;
//        break;
//    case '/':
//        if (num2 == 0) {
//            cout << "除数不能为0，请重新输入！" << endl;
//            return 1;
//        }
//        result = num1 / num2;
//        break;
//    case '%':
//        if (num2 == 0) {
//            cout << "除数不能为0，请重新输入！" << endl;
//            return 1;
//        }
//        result = static_cast<int>(num1) % static_cast<int>(num2);
//        break;
//    default:
//        cout << "非法运算符，请重新输入！" << endl;
//        return 1;
//    }
//    cout << num1 << " " << Symbol << " " << num2 << " = " << result << endl;
//    return 0;
//}






#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputStr;
    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;
    getline(cin, inputStr);
    for (char c : inputStr) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            letterCount++;
        }
        else if (c == ' ') {
            spaceCount++;
        }
        else if (c >= '0' && c <= '9') {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }
    cout << "英文字母的个数：" << letterCount << endl;
    cout << "空格的个数：" << spaceCount << endl;
    cout << "数字字符的个数：" << digitCount << endl;
    cout << "其他字符的个数：" << otherCount << endl;

    return 0;
}













//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//    int a, b;
//    int temp;
//    cout << "请输入a" << endl;
//    cin >> a;
//    cout << "请输入b" << endl;
//    cin >> b;
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//
//    }
//    int x = a;
//    cout << "请再输入a" << endl;
//    cin >> a;
//    cout << "请再输入b" << endl;
//    cin >> b;
//    cout << "最大公约数是：" << x << endl;
//    cout << "最小公倍数是：" << (a * b) / x << endl;
//    return 0;
//}












//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//    int i,j;
//    for (i = 1; i < 6; i++) {
//        for (j = 0; j < i; j++) {
//            cout << "*" ;
//        }
//        cout << "\n" ;
//    }
//    return 0;
//}











//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//    double m = 0.8;
//    int f = 2;
//    double tc = 0;
//    int td = 0;
//    int c = f;
//    while (c < 100) {
//        double ct = static_cast<double>(c) * m;
//        tc += ct;
//        td += 1;
//        c *= 2;
//    }
//    double acpd = tc / static_cast<double>(td);
//    cout << acpd << endl;
//    return 0;
//}






















//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	double a;
//	double xn;
//	double xn_p_1;
//    cout << "请输入a" << endl;
//    cin >> a;
//	bool isNegative = false;
//	if (a < 0) {
//		isNegative = true;
//		a = abs(a);
//	}
//	xn = a;
//    do {
//        xn_p_1 = 0.5 * (xn + a / xn);
//        if (abs(xn_p_1 - xn) < 1e-5) {
//            break;
//        }
//        xn = xn_p_1;
//    } while (true);
//    if (isNegative) {
//        cout << "输入的数字a为负，其平方根为虚数：" << sqrt(-a) << "i" << endl;
//    }
//    else {
//       cout << "数字a的平方根为：" << xn_p_1 << endl;
//    }
//}