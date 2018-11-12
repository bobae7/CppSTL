#include <iostream>
using namespace std;

#pragma region
namespace S2_01
{
    int main(void)
    {
        int n = 10;
        int *pn = &n;

        cout << *pn << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 2-1
#pragma region
namespace S2_02
{
    void Print(int n)
    {
        cout << "정수: " << n << endl;
    }

    int main(void)
    {
        void(*pf)(int);
        pf = Print;

        Print(10);          // 1. 함수호출
        pf(10);             // 2. 포인터를 이용한 함수 호출, 첫번째 방법
        (*pf)(10);          // 3. 포인터를 이용한 함수 호출, 두번쨰 방법

        cout << endl;
        cout << Print << endl;
        cout << pf << endl;
        cout << *pf << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 2-2
#pragma region
namespace S2_03
{
    void Print()
    {
        cout << "정적 함수 Print()" << endl;
    }

    class Point
    {
    public:
        void Print()
        {
            cout << "맴버 함수 Print()" << endl;
        }
    };

    int main(void)
    {
        Point pt;
        Point *p = &pt;

        Print();            // 첫째, 정적 함수 호출
        pt.Print();         // 둘째, 객체로 맴버 함수 호출
        p->Print();         // 셋째, 주소로 맴버 함수 호출

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 2-3
#pragma region
namespace S2_04
{
    void Print(int n)
    {
        cout << "전역함수: " << n << endl;
    }

    namespace A
    {
        void Print(int n)
        {
            cout << "namespace A 전역함수: " << n << endl;
        }
    }

    class Point
    {
    public:
        static void Print(int n)
        {
            cout << "Point 클래스의 정적 맴버함수: " << n << endl;
        }
    };

    int main(void)
    {
        void(*pf)(int);                 // 정적 함수 포인터 선언

        Print(10);                      // 1. nameapace 없는 전역 함수 호출
        A::Print(10);                   // 2. namespace A의 전역 함수 호출
        Point::Print(10);               // 3. Point 클래스의 정적 맴버 함수 호출

        pf = Print;
        pf(10);                         // 1. 함수 포인터로 namespace 없는 전역 함수 호출
        pf = A::Print;
        pf(10);                         // 2. 함수 포인터로 namespace A의 전역 함수 호출
        pf = Point::Print;
        pf(10);                         // 3. 함수 포인터로 Point 클래스의 정적 맴버 함수 호출

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 2-4
#pragma region
namespace S2_05
{
    class Point
    {
        int x, y;
    public:
        explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
        void PrintInt(int n) { cout << "테스트 정수 : " << n << endl; }
    };

    int main(void)
    {
        Point pt(2, 3);
        Point *p = &pt;

        void (Point::*pf1)() const;         // 멤버 함수 포인터 선언
        pf1 = &Point::Print;

        void (Point::*pf2)(int);            // 멤버 함수 포인터 선언
        pf2 = &Point::PrintInt;

        pt.Print();
        pt.PrintInt(10);
        cout << endl;

        (pt.*pf1)();                        // 객체로 맴버 함수 포인터를 이용한 호출
        (pt.*pf2)(10);                      // 객체로 멤버 함수 포인터를 이용한 호출
        cout << endl;

        (p->*pf1)();                        // 주소로 멤버 함수 포인터를 이용한 호출
        (p->*pf2)(10);                      // 주소로 멤버 함수 포인터를 이용한 호출
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 2-5
#pragma region
namespace S2_06
{
    void PrintHello()
    {
        cout << "Hello!" << endl;
    }

    int main(void)
    {
        PrintHello();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 2-6
#pragma region
namespace S2_07
{
    void Client(void);

    void PrintHello()
    {
        cout << "Hello!" << endl;
        Client();
    }

    void Client(void)
    {
        cout << "난 Client" << endl;
    }

    int main(void)
    {
        PrintHello();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 2-7
#pragma region
namespace S2_08
{
    void For_each(int *begin, int *end, void(*pf)(int))
    {
        while (begin != end)
        {
            pf(*begin++);           // 클라이언트 함수 호출
        }
    }
    void Print1(int n)
    {
        cout << n << ' ';
    }
    void Print2(int n)
    {
        cout << n * n << " ";
    }
    void Print3(int n)
    {
        cout << "정수 : " << n << endl;
    }

    int main(void)
    {
        int arr[5] = { 10, 20, 30, 40, 50 };

        For_each(arr, arr + 5, Print1);         // Print1() 콜백 함수의 주소를 전달
        cout << endl << endl;
        For_each(arr, arr + 5, Print2);         // Print2() 콜백 함수의 주소를 전달
        cout << endl << endl;
        For_each(arr, arr + 5, Print3);         // Print3() 콜백 함수의 주소를 전달

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 2-8
#pragma region
#include <algorithm>
namespace S2_09
{
    void Print1(int n)
    {
        cout << n << ' ';
    }
    void Print2(int n)
    {
        cout << n * n << " ";
    }
    void Print3(int n)
    {
        cout << "정수 : " << n << endl;
    }

    int main(void)
    {
        int arr[5] = { 10, 20, 30, 40, 50 };

        for_each(arr, arr + 5, Print1);
        cout << endl << endl;
        for_each(arr, arr + 5, Print2);
        cout << endl << endl;
        for_each(arr, arr + 5, Print3);

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 2-9

int main(void)
{
    S2_09::main();
}
