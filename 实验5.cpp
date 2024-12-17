//#include <iostream>
//using namespace std;
//
//class Time             
//{
//private:              
//    int hour;
//    int minute;
//    int sec;
//public:
//    void input() {
//        cin >> hour;     
//        cin >> minute;
//        cin >> sec;
//    }
//    void output() {
//        cout << hour << "：" << minute << "：" << sec << endl;
//
//    }
//};
//
//int main()
//{
//    Time t1;           
//    t1.input();
//    t1.output();
//    return 0;
// }
   






//#include <iostream>            
//#include "student.h"
//int main()
//{
//	Student stud;              
//	Student stud1;
//	stud.set_value(1234, "zzz", 'm');
//	stud1.set_value(007, "tcg", 'm');
//	stud.display(); 
//	stud1.display();
//	return 0;
//}








//#include <iostream> 
//using namespace std;
//class V
//{
//private:              // 数据成员为公用的
//	double height;
//	double width;
//	double length;
//public:
//    void input() {
//        cout << "请输入长方柱的长：";
//        cin >> length;
//        cout << "请输入长方柱的宽：";
//        cin >> width;
//        cout << "请输入长方柱的高：";
//        cin >> height;
//    }
//    double cv(){
//        return height * width * length;
//    }
//    void output() {
//        cout << "长方柱的体积为：" << cv() << endl;
//    }
//};
//int main()
//{
//    V v[3];
//    for (int i = 0; i < 3; i++) {
//        cout << "请输入第" << (i + 1) << "个长方柱的信息：" << endl;
//        v[i].input();
//    }
//    for (int i = 0; i < 3; i++) {
//        cout << "第" << (i + 1) << "个长方柱的体积如下：" << endl;
//        v[i].output();
//    }
//	return 0;
//}










//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student             
//{
//public:                   
//	string id;
//	int grade;
//};
//void max(Student* students, int num){
//    Student* maxStudent = &students[0];  
//    for (int i = 1; i < num; i++) {
//        if (students[i].grade > maxStudent->grade) {
//            maxStudent = &students[i];  
//        }
//    }
//    cout << "成绩最高的学生学号是：" << maxStudent->id << endl;
//}
//int main()
//{
//    int num = 5;
//    Student students[5];
//    for (int j = 0; j < num; j++) {
//        cout << "请输入第" << j + 1 << "个学生的学号：";
//        cin >> students[j].id;
//        cout << "请输入第" << j + 1 << "个学生的分数：";
//        cin >> students[j].grade;
//    }
//    max(students, 5);
//    return 0;
//}















#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point() {
        x = 60;
        y = 80;
    }
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display() {
        cout << "坐标点为: (" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Point p;  
    p.display();  
    p.setPoint(10, 10);  
    p.display();  

    return 0;
}
