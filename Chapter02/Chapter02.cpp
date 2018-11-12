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
        cout << "����: " << n << endl;
    }

    int main(void)
    {
        void(*pf)(int);
        pf = Print;

        Print(10);          // 1. �Լ�ȣ��
        pf(10);             // 2. �����͸� �̿��� �Լ� ȣ��, ù��° ���
        (*pf)(10);          // 3. �����͸� �̿��� �Լ� ȣ��, �ι��� ���

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
        cout << "���� �Լ� Print()" << endl;
    }

    class Point
    {
    public:
        void Print()
        {
            cout << "�ɹ� �Լ� Print()" << endl;
        }
    };

    int main(void)
    {
        Point pt;
        Point *p = &pt;

        Print();            // ù°, ���� �Լ� ȣ��
        pt.Print();         // ��°, ��ü�� �ɹ� �Լ� ȣ��
        p->Print();         // ��°, �ּҷ� �ɹ� �Լ� ȣ��

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
        cout << "�����Լ�: " << n << endl;
    }

    namespace A
    {
        void Print(int n)
        {
            cout << "namespace A �����Լ�: " << n << endl;
        }
    }

    class Point
    {
    public:
        static void Print(int n)
        {
            cout << "Point Ŭ������ ���� �ɹ��Լ�: " << n << endl;
        }
    };

    int main(void)
    {
        void(*pf)(int);                 // ���� �Լ� ������ ����

        Print(10);                      // 1. nameapace ���� ���� �Լ� ȣ��
        A::Print(10);                   // 2. namespace A�� ���� �Լ� ȣ��
        Point::Print(10);               // 3. Point Ŭ������ ���� �ɹ� �Լ� ȣ��

        pf = Print;
        pf(10);                         // 1. �Լ� �����ͷ� namespace ���� ���� �Լ� ȣ��
        pf = A::Print;
        pf(10);                         // 2. �Լ� �����ͷ� namespace A�� ���� �Լ� ȣ��
        pf = Point::Print;
        pf(10);                         // 3. �Լ� �����ͷ� Point Ŭ������ ���� �ɹ� �Լ� ȣ��

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
        void PrintInt(int n) { cout << "�׽�Ʈ ���� : " << n << endl; }
    };

    int main(void)
    {
        Point pt(2, 3);
        Point *p = &pt;

        void (Point::*pf1)() const;         // ��� �Լ� ������ ����
        pf1 = &Point::Print;

        void (Point::*pf2)(int);            // ��� �Լ� ������ ����
        pf2 = &Point::PrintInt;

        pt.Print();
        pt.PrintInt(10);
        cout << endl;

        (pt.*pf1)();                        // ��ü�� �ɹ� �Լ� �����͸� �̿��� ȣ��
        (pt.*pf2)(10);                      // ��ü�� ��� �Լ� �����͸� �̿��� ȣ��
        cout << endl;

        (p->*pf1)();                        // �ּҷ� ��� �Լ� �����͸� �̿��� ȣ��
        (p->*pf2)(10);                      // �ּҷ� ��� �Լ� �����͸� �̿��� ȣ��
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
        cout << "�� Client" << endl;
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
            pf(*begin++);           // Ŭ���̾�Ʈ �Լ� ȣ��
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
        cout << "���� : " << n << endl;
    }

    int main(void)
    {
        int arr[5] = { 10, 20, 30, 40, 50 };

        For_each(arr, arr + 5, Print1);         // Print1() �ݹ� �Լ��� �ּҸ� ����
        cout << endl << endl;
        For_each(arr, arr + 5, Print2);         // Print2() �ݹ� �Լ��� �ּҸ� ����
        cout << endl << endl;
        For_each(arr, arr + 5, Print3);         // Print3() �ݹ� �Լ��� �ּҸ� ����

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
        cout << "���� : " << n << endl;
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
