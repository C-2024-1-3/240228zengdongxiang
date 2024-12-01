

//#include <iostream>
//using namespace std;
//int main()
//{
//    const int SIZE = 10;
//    int numbers[SIZE];
//    int count = 0;
//
//    cout << "请输入10个数：" << endl;
//
//    for (int i = 0; i < SIZE; ++i) {
//        int num;
//        cin >> num;
//
//        bool isNew = true;
//        for (int j = 0; j < count; ++j) {
//            if (numbers[j] == num) {
//                isNew = false;
//                break;
//            }
//        }
//
//        if (isNew) {
//            numbers[count] = num;
//            count++;
//        }
//    }
//
//    cout << "不同的数为：" << endl;
//    for (int i = 0; i < count; ++i) {
//        cout << numbers[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}







//#include <iostream>
//using namespace std;
//void swap(double& a, double& b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}
//void bubbleSort(double list[], int listSize) {
//bool changed = true;
//	do
//	{
//		changed = false;
//		for (int j = 0; j < listSize - 1; j++)
//			if (list[j] > list[j + 1])
//			{
//				swap(list[j] , list[j + 1]);
//				changed = true;
//			}
//	} while (changed);
//}
//int main()
//{
//	 
//	const int SIZE = 10;
//	double numbers[SIZE];
//	cout << "请输入10个双精度数字：" << endl;
//	for (int i = 0; i < SIZE; i++) {
//		cin >> numbers[i];
//	}
//
//	bubbleSort(numbers, SIZE);
//
//	cout << "排序后的数字为：" << endl;
//	for (int i = 0; i < SIZE; i++) {
//		cout << numbers[i] << " ";
//	}
//	cout << endl;
//
//    return 0;
//}






//#include <iostream>
//using namespace std;
//int main() {
//    const int NUM_LOCKERS = 100;
//    bool lockers[NUM_LOCKERS];
//    for (int i = 0; i < NUM_LOCKERS; ++i) {
//        lockers[i] = false;
//    }
//    for (int student = 1; student <= NUM_LOCKERS; ++student) {
//        for (int locker = student; locker <= NUM_LOCKERS; locker += student) {
//            lockers[locker - 1] = !lockers[locker - 1];
//        }
//    }
//    cout << "开着的存物柜号码为：";
//    for (int i = 0; i < NUM_LOCKERS; ++i) {
//        if (lockers[i]) {
//            cout << (i + 1) << " ";
//        }
//    }
//    cout << endl;
//
//    return 0;
//}





//#include <iostream>
//using namespace std;
//
//void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
//    int i = 0, j = 0, k = 0;
//
//    while (i < size1 && j < size2) {
//        if (list1[i] < list2[j]) {
//            list3[k] = list1[i];
//            i++;
//        }
//        else {
//            list3[k] = list2[j];
//            j++;
//        }
//        k++;
//    }
//
//    while (i < size1) {
//        list3[k] = list1[i];
//        i++;
//        k++;
//    }
//
//    while (j < size2) {
//        list3[k] = list2[j];
//        j++;
//        k++;
//    }
//}
//
//int main() {
//    const int MAX_SIZE = 80;
//    int list1[MAX_SIZE];
//    int list2[MAX_SIZE];
//    int list3[MAX_SIZE];
//
//    int size1, size2;
//
//    cout << "请输入第一个排列好的数组的元素个数：";
//    cin >> size1;
//    cout << "请输入第一个排列好的数组：";
//    for (int i = 0; i < size1; i++) {
//        cin >> list1[i];
//    }
//    cout << "请输入第二个排列好的数组的元素个数：";
//    cin >> size2;
//    cout << "请输入第二个排列好的数组：";
//    for (int i = 0; i < size2; i++) {
//        cin >> list2[i];
//    }
//
//    merge(list1, size1, list2, size2, list3);
//
//    cout << "合并后的数组为：";
//    for (int i = 0; i < size1 + size2; i++) {
//        cout << list3[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}






//#include <iostream>
//#include <cstring>
//
//int indexOf(const char s1[], const char s2[]) {
//    int s1Len = strlen(s1);
//    int s2Len = strlen(s2);
//
//    for (int i = 0; i <= s2Len - s1Len; i++) {
//        int j;
//        for (j = 0; j < s1Len; j++) {
//            if (s2[i + j] != s1[j]) {
//                break;
//            }
//        }
//        if (j == s1Len) {
//            return i;
//        }
//    }
//
//    return -1;
//}
//
//int main() {
//    const int MAX_LENGTH = 100;
//    char s1[MAX_LENGTH];
//    char s2[MAX_LENGTH];
//
//    std::cout << "请输入第一个字符串：";
//    std::cin.getline(s1, MAX_LENGTH);
//
//    std::cout << "请输入第二个字符串：";
//    std::cin.getline(s2, MAX_LENGTH);
//
//    int result = indexOf(s1, s2);
//    if (result != -1) {
//        std::cout << s1 << " 是 " << s2 << " 的子串，下标为：" << result << std::endl;
//    }
//    else {
//        std::cout << s1 << " 不是 " << s2 << " 的子串。" << std::endl;
//    }
//
//    return 0;
//}






//#include <iostream>
//#include <cctype>
//
//void count(const char s[], int counts[]) {
//    for (int i = 0; i < 26; ++i) {
//        counts[i] = 0;
//    }
//
//    for (int i = 0; s[i] != '\0'; ++i) {
//        char c = tolower(s[i]);
//        if (isalpha(c)) {
//            counts[c - 'a']++;
//        }
//    }
//}
//
//int main() {
//    const int MAX_LENGTH = 1000;
//    char s[MAX_LENGTH];
//    int counts[26];
//
//    std::cout << "请输入一个字符串：";
//    std::cin.getline(s, MAX_LENGTH);
//
//    count(s, counts);
//
//    std::cout << "每个字母出现的次数如下：" << std::endl;
//    for (int i = 0; i < 26; ++i) {
//        if (counts[i] != 0) {
//            char c = 'a' + i;
//            std::cout << c << "：" << counts[i] << "次" << std::endl;
//        }
//    }
//
//    return 0;
//}






//#include <iostream>
//#include <cstring>
//
//int indexof(const char* s1, const char* s2) {
//    int s1Len = strlen(s1);
//    int s2Len = strlen(s2);
//
//    for (int i = 0; i <= s2Len - s1Len; i++) {
//        int j;
//        for (j = 0; j < s1Len; j++) {
//            if (s2[i + j] != s1[j]) {
//                break;
//            }
//        }
//        if (j == s1Len) {
//            return i;
//        }
//    }
//
//    return -1;
//}
//
//int main() {
//    const int MAX_LENGTH = 100;
//    char s1[MAX_LENGTH];
//    char s2[MAX_LENGTH];
//
//    std::cout << "请输入第一个字符串：";
//    std::cin.getline(s1, MAX_LENGTH);
//
//    std::cout << "请输入第二个字符串：";
//    std::cin.getline(s2, MAX_LENGTH);
//
//    int result = indexof(s1, s2);
//    if (result != -1) {
//        std::cout << s1 << " 是 " << s2 << " 的子串，下标为：" << result << std::endl;
//    }
//    else {
//        std::cout << s1 << " 不是 " << s2 << " 的子串。" << std::endl;
//    }
//
//    return 0;
//}










//#include <iostream>
//
//int parseHex(const char* const hexString) {
//    int decimalValue = 0;
//    int length = strlen(hexString);
//    for (int i = 0; i < length; i++) {
//        char c = hexString[i];
//        int digitValue;
//        if (c >= '0' && c <= '9') {
//            digitValue = c - '0';
//        }
//        else if (c >= 'A' && c <= 'F') {
//            digitValue = 10 + (c - 'A');
//        }
//        else if (c >= 'a' && c <= 'f') {
//            digitValue = 10 + (c - 'a');
//        }
//        else {
//            return -1;
//        }
//        decimalValue = decimalValue * 16 + digitValue;
//    }
//    return decimalValue;
//}
//
//int main() {
//    const int MAX_LENGTH = 100;
//    char hexString[MAX_LENGTH];
//
//    std::cout << "请输入一个十六进制字符串：";
//    std::cin.getline(hexString, MAX_LENGTH);
//
//    int decimalResult = parseHex(hexString);
//    if (decimalResult != -1) {
//        std::cout << "十六进制字符串 " << hexString << " 转换为十进制数为：" << decimalResult << std::endl;
//    }
//    else {
//        std::cout << "输入的字符串包含非法字符，请重新输入。" << std::endl;
//    }
//
//    return 0;
//}




#include <iostream>
#include <algorithm>

void sortArray(int* array, int size) {
    std::sort(array, array + size);
}

int main() {
    int size;
    std::cout << "请输入动态数组的元素个数：";
    std::cin >> size;

    int* dynamicArray = new int[size];

    std::cout << "请依次输入数组的元素：";
    for (int i = 0; i < size; i++) {
        std::cin >> dynamicArray[i];
    }

    std::cout << "原始动态数组：";
    for (int i = 0; i < size; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    sortArray(dynamicArray, size);

    std::cout << "排序后的动态数组：";
    for (int i = 0; i < size; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] dynamicArray;

    return 0;
}