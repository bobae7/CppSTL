#include <iostream>
using namespace std;

#pragma region
namespace S1_01
{
    int main(void)
    {
        int n1 = 10, n2 = 20;

        cout << n1 + n2 << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-1
#pragma region
namespace S1_02
{
    class Point
    {
        int x;
        int y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
    };

    int main(void)
    {
        Point p1(2, 3), p2(5, 5);

        //p1 + p2;        // ���⼭ ���� �����Ϸ��� + ������ ���� ����

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-2
#pragma region
namespace S1_03
{
    class Point
    {
        int x;
        int y;
    public:
        Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
    };

    int main(void)
    {
        Point p1(2, 3), p2(5, 5);

        //p1 + p2;              // => p1.operator+(p2);
        //p1 * p2;              // => p1.operator*(p2);
        //p1 = p2;              // => p1.operator=(p2);
        //p1 == p2;             // => p1.operator==(p2);
        //p1 += p2;             // => p1.operator+=(p2);3e4

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-3
#pragma region
namespace S1_04
{
    class Point
    {
        int x;
        int y;
    public:
        Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
        void operator+(const Point arg)
        {
            Point pt;
            pt.x = this->x + arg.x;
            pt.y = this->y + arg.y;
            cout << "operator+() �Լ�ȣ��" << endl;
        }
    };

    int main(void)
    {
        Point p1(2, 4), p2(5, 5);

         p1 + p2;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-4
#pragma region
namespace S1_05
{
    class Point
    {
        int x;
        int y;
    public:
        Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
        const Point operator+(const Point& arg) const
        {
            Point pt;
            pt.x = this->x + arg.x;
            pt.y = this->y + arg.y;

            return pt;
        }
    };

    int main(void)
    {
        Point p1(2, 3), p2(5, 5);
        Point p3;

        p3 = p1 + p2;           // p1.operator+(p2);
        p3.Print();
        p3 = p1.operator+(p2);
        p3.Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-5
#pragma region
namespace S1_06
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
        const Point operator+(const Point& arg) const
        {
            Point pt;
            pt.x = this->x + arg.x;
            pt.y = this->y + arg.y;

            return pt;
        }
    };

    int main(void)
    {
        Point p1(2, 3), p2(5, 5);
        Point p3;

        p3 = p1 + p2;
        p3.Print();
        p3 = p1.operator+(p2);
        p3.Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-6
#pragma region
namespace S1_07
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() { cout << x << ',' << y << endl; }
        void operator++()
        {

        }
        void operator++(int)
        {

        }
    };

    int main()
    {
        Point p1(2, 3), p2(5, 5);

        ++p1;           // p1.operator++();
        p2++;           // p1.operator++(0);

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-7
#pragma region
namespace S1_08
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }

        const Point& operator++ ()      // ���� ++
        {
            ++x;
            ++y;
            return *this;
        }
        const Point& operator++ (int)
        {
            Point pt(x, y);
            x++;
            y++;
            return pt;
        }
    };

    int main(void)
    {
        Point p1(2, 3), p2(2, 3);
        Point result;

        result = ++p1;              // p1.operator++();
        p1.Print();
        result.Print();

        result = p2++;              // p2.operator++(0);
        p2.Print();
        result.Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-8
#pragma region
namespace S1_09
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() { cout << x << ',' << y << endl; }

        const Point& operator--()
        {
            --x;
            --y;
            return *this;
        }

        const Point operator--(int)
        {
            Point pt(x, y);
            --x;
            --y;
            return pt;
        }
    };

    int main(void)
    {
        Point p1(2, 3), p2(2, 3);
        Point result;

        result = --p1;
        p1.Print();
        result.Print();

        result = p2--;
        p2.Print();
        result.Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-9
#pragma region
namespace S1_10
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() { cout << x << ',' << y << endl; }
        bool operator==(const Point& arg) const
        {
            return x == arg.x && y == arg.y ? true : false;
        }

    };

    int main(void)
    {
        Point p1(2, 3), p2(5, 5), p3(2, 3);

        if (p1 == p2)
            cout << "p1 == p2" << endl;
        if (p1 == p3)
            cout << "p1 == p3" << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-10
#pragma region
namespace S1_11
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }

        bool operator==(const Point& arg) const
        {
            return x == arg.x && y == arg.y ? true : false;
        }

        bool operator!=(const Point& arg) const
        {
            return !(*this == arg);
        }
    };

    int main(void)
    {
        Point p1(2, 3), p2(5, 5), p3(2, 3);

        if (p1 != p2)
            cout << "p1 != p2" << endl;
        if (p1 != p3)
            cout << "p1 != p3" << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-11
#pragma region
namespace S1_12
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
        int GetX() const { return x; }
        int GetY() const { return y; }

        const Point operator-(const Point& arg) const
        {
            return Point(x - arg.x, y - arg.y);
        }
    };

    int main()
    {
        Point p1(2, 3), p2(5, 5);
        Point p3;

        p3 = p1 - p2;
        p3.Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-12
#pragma region
namespace S1_13
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
        int GetX() const { return x; }
        int GetY() const { return y; }
    };

    const Point operator-(const Point& argL, const Point& argR)
    {
        return Point(argL.GetX() - argR.GetX(), argL.GetY() - argR.GetY());
    }

    int main(void)
    {
        Point p1(2, 3), p2(5, 5);
        Point p3;

        p3 = p1 - p2;
        p3.Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-13
#pragma region
namespace S1_14
{
    struct FuncObject
    {
    public:
        void operator() (int arg) const
        {
            cout << "���� : " << arg << endl;
        }
    };

    void Print1(int arg)
    {
        cout << "���� : " << arg << endl;
    }

    int main(void)
    {
        void(*Print2)(int) = Print1;
        FuncObject Print3;

        Print1(10);
        Print2(10);
        Print3(10);

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-14
#pragma region
namespace S1_15
{
    struct FuncObject
    {
    public:
        void operator()(int arg) const
        {
            cout << "���� : " << arg << endl;
        }
        void operator()(int arg1, int arg2) const
        {
            cout << "���� : " << arg1 << ',' << arg2 << endl;
        }
        void operator()(int arg1, int arg2, int arg3)
        {
            cout << "���� : " << arg1 << ',' << arg2 << ',' << arg3 << endl;
        }
    };

    int main(void)
    {
        FuncObject print;
        print(10);
        print(10, 20);
        print(10, 20, 30);
        cout << endl;

        print.operator()(10);
        print.operator()(10, 20);
        print.operator()(10, 20, 30);
        cout << endl;

        FuncObject()(10);
        FuncObject()(10, 20);
        FuncObject()(10, 20, 30);
        cout << endl;

        FuncObject().operator()(10);
        FuncObject().operator()(10, 20);
        FuncObject().operator()(10, 20, 30);

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-15
#pragma region
namespace S1_16
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
        int operator[](int idx) const
        {
            if (idx == 0)
                return x;
            else if (idx == 1)
                return y;
            else
                throw "�̷� ���� ���� �ž�!";
        }
    };

    int main()
    {
        Point pt(1, 2);
        pt.Print();

        cout << pt[0] << ','
            << pt[1] << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-16
#pragma region
namespace S1_17
{
    class Array
    {
        int *arr;
        int size;
        int capacity;

    public:
        Array(int cap = 100) :arr(0), size(0), capacity(cap)
        {
            arr = new int[capacity];
        }
        ~Array()
        {
            delete[] arr;
        }
        void Add(int data)
        {
            if (size < capacity)
                arr[size++] = data;
        }
        int Size() const
        {
            return size;
        }
        int operator[](int idx) const
        {
            return arr[idx];
        }
    };

    int main(void)
    {
        Array ar(10);
        ar.Add(10);
        ar.Add(20);
        ar.Add(30);

        for (int i = 0; i < ar.Size(); i++)
            cout << ar[i] << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-17
#pragma region
namespace S1_18
{
    class Array
    {
        int *arr;
        int size;
        int capacity;

    public:
        Array(int cap = 100) : arr(0), size(0), capacity(cap)
        {
            arr = new int[capacity];
        }
        ~Array()
        {
            delete[] arr;
        }
        void Add(int data)
        {
            if (size < capacity)
                arr[size++] = data;
        }
        int Size() const
        {
            return size;
        }
        int operator[] (int idx) const
        {
            return arr[idx];
        }
        int& operator[] (int idx)
        {
            return arr[idx];
        }
    };

    int main(void)
    {
        Array ar(10);
        ar.Add(10);
        ar.Add(20);
        ar.Add(30);

        cout << ar[0] << endl;
        cout << endl;

        const Array& ar2 = ar;
        cout << ar2[0] << endl;
        cout << endl;

        ar[0] = 100;
        // ar2[0] = 100; // ����! �����ü (��)�� ��ȭ�ϹǷ� ������ �� �����ϴ�.

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-18
#pragma region
namespace S1_19
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
    };

    int main(void)
    {
        Point *p1 = new Point(2, 3);
        Point *p2 = new Point(5, 5);

        p1->Print();
        p2->Print();

        delete p1;
        delete p2;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-19
#pragma region
namespace S1_20
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
    };
    class PointPtr
    {
        Point *ptr;
    public:
        PointPtr(Point *p) :ptr(p) { }
        ~PointPtr()
        {
            delete ptr;
        }
    };

    int main(void)
    {
        PointPtr p1 = new Point(2, 3);
        PointPtr p2 = new Point(5, 5);

        // p1->Print() ��� �Ұ�
        // p2->Print() ��� �Ұ�

        // p1�� �Ҹ��ڿ��� Point ���� ��ü�� �ڵ����� �޸𸮿��� ����
        // p2�� �Ҹ��ڿ��� Point ���� ��ü�� �ڵ����� �޸𸮿��� ����

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-20
#pragma region
namespace S1_21
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
    };
    class PointPtr
    {
        Point *ptr;
    public:
        PointPtr(Point *p) :ptr(p) { }
        ~PointPtr()
        {
            delete ptr;
        }
        Point* operator->() const
        {
            return ptr;
        }
    };

    int main(void)
    {
        PointPtr p1 = new Point(2, 3);
        PointPtr p2 = new Point(5, 5);

        p1->Print();
        p2->Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-21
#pragma region
namespace S1_22
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
    };
    class PointPtr
    {
        Point *ptr;
    public:
        PointPtr(Point *p) :ptr(p) { }
        ~PointPtr()
        {
            delete ptr;
        }
        Point* operator->() const
        {
            return ptr;
        }
        Point& operator*() const
        {
            return *ptr;
        }
    };

    int main(void)
    {
        Point *p1 = new Point(2, 3);
        PointPtr p2 = new Point(5, 5);

        p1->Print();
        p2->Print();
        cout << endl;

        (*p1).Print();
        (*p2).Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-22
#pragma region
namespace S1_23
{
    class A
    {
    };
    class B
    {
    public:
        B() { cout << "B() ������" << endl; }
        B(A _a) { cout << "B(A _a) ������" << endl; }
        B(int n) { cout << "B(int n) ������" << endl; }
        B(double d) { cout << "B(double d) ������" << endl; }
    };
    int main(void)
    {
        A a;
        int n = 10;
        double d = 5.5;
        B b;
        b = a;
        b = n;
        b = d;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-23
#pragma region
namespace S1_24
{
    class Point
    {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
    };
    int main(void)
    {
        Point pt;
        pt.Print();

        pt = 10;
        pt.Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-24
#pragma region
namespace S1_25
{
    class Point
    {
        int x, y;
    public:
        explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
    };
    int main(void)
    {
        Point pt;
        pt.Print();

        //pt = 10;
        pt = Point(10);
        pt.Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-25
#pragma region
namespace S1_26
{
    class A
    {
    };
    class B
    {
    public:
        operator A()
        {
            cout << "operator A() ȣ��" << endl;
            return A();
        }
        operator int()
        {
            cout << "operator int() ȣ��" << endl;
            return 10;
        }
        operator double()
        {
            cout << "operator double() ȣ��" << endl;
            return 5.5;
        }
    };

    int main(void)
    {
        A a;
        int n;
        double d;

        B b;
        a = b;  // b.operator A() �Ͻ��� ȣ��
        n = b;  // b.operator int() �Ͻ��� ȣ��
        d = b;  // b.operator double() �Խ��� ȣ��

        cout << endl;
        a = b.operator A();             // ����� ȣ��
        n = b.operator int();           // ����� ȣ��
        d = b.operator double();        // ����� ȣ��

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-26
#pragma region
namespace S1_27
{
    class Point
    {
        int x, y;
    public:
        explicit Point(int _x = 0, int _y = 0) : x{ x }, y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
        operator int() const { return x; }
    };

    int main(void)
    {
        int n = 10;

        Point pt(2, 3);
        //n = pt;                 // pt.operator int() �Խ��� ȣ��
        n = pt.operator int();
        cout << n << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 1-27

#pragma region
namespace E1_01
{
    class String
    {
        char buf[100];
    public:
        String(const char* sz)
        {
            strcpy_s(buf, sz);
        }
        operator const char* () const
        {
            return buf;
        }
    };

    int main(void)
    {
        String s("Hello!");
        const char* sz = s;

        cout << sz << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Excercise 1-01
#pragma region
namespace E1_02
{
    class String
    {
        char buf[100];
    public:
        String(const char* sz)
        {
            strcpy_s(buf, sz);
        }
    };

    int main(void)
    {
        const char* sz = "Hello!";
        String s("Hi~!");
        s = sz;

        cout << sz << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Excercise 1-02

int main(void)
{
    //S1_27::main();
    E1_02::main();
}