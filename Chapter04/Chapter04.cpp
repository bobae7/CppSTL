#include <iostream>
#include <string>
#include <functional>

using namespace std;

#pragma region S4_01
namespace S4_01
{
    void Print(int a, int b)
    {
        cout << a << ", " << b << endl;
    }

    int main(void)
    {
        Print(10, 20);

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-1
#pragma region S4_02
namespace S4_02
{
    void Print(int a, int b)
    {
        cout << a << ", " << b << endl;
    }
    void Print(double a, double b)
    {
        cout << a << ", " << b << endl;
    }
    void Print(const char* a, const char* b)
    {
        cout << a << ", " << b << endl;
    }

    int main(void)
    {
        Print(10, 20);
        Print(0.123, 1.123);
        Print("ABC", "abcde");

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-2
#pragma region S4_03
namespace S4_03
{
    template<typename T>
    void Print(T a, T b)
    {
        cout << a << ", " << b << endl;
    }

    int main(void)
    {
        Print(10, 20);
        Print(0.123, 1.123);
        Print("ABC", "abcdef");

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-3
#pragma region S4_04
namespace S4_04
{
    template<typename T>
    void Print(T a, T b)
    {
        cout << a << ", " << b << endl;
    }

    int main(void)
    {
        Print<int>(10, 20);
        Print<double>(0.123, 1.123);
        Print<const char*>("ABC", "abcdefg");

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-4
#pragma region S4_05
namespace S4_05
{
    template<typename T1, typename T2>
    void Print(T1 a, T2 b)
    {
        cout << a << ", " << b << endl;
    }

    int main(void)
    {
        Print(10, 1.5);
        Print("Hello!", 100);
        Print(1.5, "Hello!");

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-5
#pragma region S4_06
namespace S4_06
{
    template<typename T>
    void Swap(T &a, T &b)
    {
        T temp = a;
        a = b;
        b = temp;
    }

    int main(void)
    {
        int n1 = 10, n2 = 20;
        double d1 = 1.1, d2 = 2.2;

        cout << n1 << ", " << n2 << endl;
        Swap(n1, n2);
        cout << n1 << ", " << n2 << endl;
        cout << endl;

        cout << d1 << ", " << d2 << endl;
        Swap(d1, d2);
        cout << d1 << ", " << d2 << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-6
#pragma region S4_07
namespace S4_07
{
    template<typename T, int size>
    void PrintArray(T* arr)
    {
        for (int i = 0; i < size; i++)
        {
            cout << "[" << i << "]: " << arr[i] << endl;
        }
        cout << endl;
    }

    int main(void)
    {
        int arr1[5] = { 10, 20, 30, 40, 50 };
        PrintArray<int, 5>(arr1);       // 명시적 호출

        double arr2[5] = { 1.1,2.2,3.3,4.4,5.5 };
        PrintArray<double, 5>(arr2);    // 명시적 호출

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-7
#pragma region S4_08
namespace S4_08
{
    class Point
    {
        int x, y;
    public:
        explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ", " << y << endl; }
    };
    template<typename T>
    void Print(T a)
    {
        cout << a << endl;
    }

    int main(void)
    {
        int n = 10;
        double d = 2.5;
        Point pt(2, 3);

        Print(n);
        Print(d);
        //Print(pt);      // 에러! cout << pt; 연산이 불가능하므로

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-8
#pragma region S4_09
namespace S4_09
{
    class Point
    {
        int x, y;
    public:
        explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ", " << y << endl; }
    };
    template<typename T>
    void Print(T a)
    {
        cout << a << endl;
    }
    template< >
    void Print(Point a)             // 명시적인 코드: vodi Print<Point>(Point a)
    {
        cout << "Print 특수화 버전: ";
        a.Print();
    }

    int main(void)
    {
        int n = 10;
        double d = 2.5;
        Point pt(2, 3);

        Print(n);       // Print<int>(n)        일반화 버전 호출
        Print(d);       // Print<double>(d)     일반화 버전 호출
        Print(pt);      // Pring<Point>(pt)     특수화 버전 호출

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-9
#pragma region S4_10
namespace S4_10
{
    class Array
    {
        int *buf;
        int size;       // 원소의 개수
        int capacity;   // 저장 가능한 메모리 크기
    public:
        explicit Array(int cap = 100) :buf(0), size(0), capacity(cap)
        {
            buf = new int[capacity];
        }
        ~Array() { delete[] buf; }
        void Add(int data)
        {
            buf[size++] = data;
        }
        int operator[](int idx) const
        {
            return buf[idx];
        }
        int GetSize() const
        {
            return size;
        }
        // 나머지 인터페이스는 생략
    };

    int main(void)
    {
        Array arr;

        arr.Add(10);
        arr.Add(20);
        arr.Add(30);

        for (int i = 0; i < arr.GetSize(); i++)
            cout << arr[i] << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-10
#pragma region S4_11
namespace S4_11
{
    class IntArray
    {
        int *buf;
        int size;
        int capacity;
    public:
        explicit IntArray(int cap = 100) :buf(0), size(0), capacity(cap)
        { buf = new int[capacity]; }
        ~IntArray() { delete[] buf; }
        void Add(int data) { buf[size++] = data; }
        int operator[](int idx) const { return buf[idx]; }
        int GetSize() const { return size; }
    };
    class DoubleArray
    {
        double *buf;
        int size;
        int capacity;
    public:
        explicit DoubleArray(int cap = 100) :buf(0), size(0), capacity(cap)
        { buf = new double[capacity]; }
        ~DoubleArray() { delete[] buf; }
        void Add(double data) { buf[size++] = data; }
        double operator[](int idx) const { return buf[idx]; }
        int GetSize() { return size; }
    };
    class StringArray
    {
        string* buf;
        int size;
        int capacity;
    public:
        explicit StringArray(int cap = 100) :buf(0), size(0), capacity(cap)
        { buf = new string[cap]; }
        ~StringArray() { delete[] buf; }
        void Add(string data) { buf[size++] = data; }
        string operator[](int idx) { return buf[idx]; }
        int GetSize() { return size; }
    };

    int main(void)
    {
        IntArray iarr;          // 정수 Array 객체
        iarr.Add(10);
        iarr.Add(20);
        iarr.Add(30);

        for (int i = 0; i < iarr.GetSize(); i++)
            cout << "iarr[" << i << "]: " << iarr[i] << endl;

        DoubleArray darr;
        darr.Add(10.12);
        darr.Add(20.12);
        darr.Add(30.12);

        for (int i = 0; i < darr.GetSize(); i++)
            cout << "darr[" << i << "]: " << darr[i] << endl;

        StringArray sarr;
        sarr.Add("ABC");
        sarr.Add("DEF");
        sarr.Add("GHI");

        for (int i = 0; i < sarr.GetSize(); i++)
            cout << "sarr[" << i << "]: " << sarr[i] << endl;
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-11
#pragma region S4_12
namespace S4_12
{
    template<typename T>
    class Array
    {
        T *buf;
        int size;
        int capacity;
    public:
        explicit Array(int cap = 100) : buf(0), size(0), capacity(cap) { buf = new T[capacity]; }
        ~Array() { delete[] buf; }
        void Add(T data) { buf[size++] = data; }
        T operator[](int idx) const { return buf[idx]; }
        int GetSize() const { return size; }
    };

    int main(void)
    {
        Array<int> iarr;          // 정수 Array 객체
        iarr.Add(10);
        iarr.Add(20);
        iarr.Add(30);

        for (int i = 0; i < iarr.GetSize(); i++)
            cout << "iarr[" << i << "]: " << iarr[i] << endl;

        Array<double> darr;
        darr.Add(10.12);
        darr.Add(20.12);
        darr.Add(30.12);

        for (int i = 0; i < darr.GetSize(); i++)
            cout << "darr[" << i << "]: " << darr[i] << endl;

        Array<string> sarr;
        sarr.Add("ABC");
        sarr.Add("DEF");
        sarr.Add("GHI");

        for (int i = 0; i < sarr.GetSize(); i++)
            cout << "sarr[" << i << "]: " << sarr[i] << endl;
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-12
#pragma region S4_13
namespace S4_13
{
    template<typename T=int, int capT=100>
    class Array
    {
        T *buf;
        int size;
        int capacity;
    public:
        explicit Array(int cap = capT) :buf(0), size(0), capacity(cap)
        { buf = new T[cap]; }
        ~Array() { delete[] buf; }
        void Add(T data) { buf[size++] = data; }
        T operator[](int idx) const { return buf[idx]; }
        int GetSize() const { return size; }
    };

    int main(void)
    {
        Array<> iarr;           // 디폴트 매개변수 값 int, 100 사용
        iarr.Add(10);
        iarr.Add(20);
        iarr.Add(30);
        for (int i = 0; i < iarr.GetSize(); i++)
            cout << iarr[i] << " ";
        cout << endl;

        Array<double> darr;
        darr.Add(10.12);
        darr.Add(20.12);
        darr.Add(30.12);
        for (int i = 0; i < darr.GetSize(); i++)
            cout << darr[i] << " ";
        cout << endl;

        Array<string, 10> sarr;
        sarr.Add("ABC");
        sarr.Add("abc");
        sarr.Add("Hello");
        for (int i = 0; i < sarr.GetSize(); i++)
            cout << sarr[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-13
#pragma region S4_14
namespace S4_14
{
    template<typename T>
    class ObjectInfo
    {
        T data;
    public:
        ObjectInfo(const T& d) :data(d) { }
        ~ObjectInfo() { }
        void Print()
        {
            cout << "타입 : " << typeid(data).name() << endl;
            cout << "크기 : " << sizeof(data) << endl;
            cout << "값 : " << data << endl;
            cout << endl;
        }
    };

    int main(void)
    {
        ObjectInfo<int> d1(10);
        d1.Print();

        ObjectInfo<double> d2(5.5);
        d2.Print();

        ObjectInfo<string> d3("Hello!");
        d3.Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-14
#pragma region S4_15
namespace S4_15
{
    template<typename T>
    class ObjectInfo
    {
        T data;
    public:
        ObjectInfo(const T& d) :data(d) { }
        //~ObejctInfo() { }
        void Print()
        {
            cout << "타입 : " << typeid(data).name() << endl;
            cout << "크기 : " << sizeof(data) << endl;
            cout << "값 : " << data << endl;
            cout << endl;
        }
    };
    template<>
    class ObjectInfo<string>
    {
        string data;
    public:
        ObjectInfo(const string& d) : data(d) { }
        ~ObjectInfo() { }
        void Print()
        {
            //cout << "타입 : " << typeid(data).name() << endl;
            cout << "타입 :  " << "string" << endl;
            //cout << "크기 : " << sizeof(data) << endl;
            cout << "문자열 길이 : " << data.size() << endl;
            cout << "값 : " << data << endl;
            cout << endl;
        }
    };

    int main(void)
    {
        ObjectInfo<int> d1(10);
        d1.Print();

        ObjectInfo<double> d2(5.5);
        d2.Print();

        ObjectInfo<string> d3("Hello!");
        d3.Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-15
#pragma region S4_16
namespace S4_16
{
    void For_each(int *begin, int *end, void(*pf)(int))
    {
        while (begin != end)
        {
            pf(*begin++);
        }
    }
    void PrintInt(int n)
    {
        cout << n << " ";
    }

    int main(void)
    {
        int arr[5] = { 10, 20, 30, 40, 50 };
        For_each(arr, arr + 5, PrintInt);
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample7 4-16
#pragma region S4_17
namespace S4_17
{
    template<typename IterT, typename Func>
    void For_each(IterT begin, IterT end, Func pf)
    {
        while (begin != end)
        {
            pf(*begin++);
        }
    }
    void PrintInt(int data)
    {
        cout << data << " ";
    }
    void PrintString(string data)
    {
        cout << data << " ";
    }

    int main(void)
    {
        int arr[5] = { 10, 20, 30, 40, 50 };
        For_each(arr, arr + 5, PrintInt);
        cout << endl;

        string sarr[3] = { "abc", "ABC", "Hello!" };
        For_each(sarr, sarr + 3, PrintString);
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-17
#pragma region S4_18
namespace S4_18
{
    template<typename IterT, typename Func>
    void For_each(IterT begin, IterT end, Func pf)
    {
        while (begin != end)
        {
            pf(*begin++);
        }
    }
    void PrintInt(int data)
    {
        cout << data << " ";
    }
    void PrintString(string data)
    {
        cout << data << " ";
    }

    int main(void)
    {
        int arr[5] = { 10, 20, 30, 40, 50 };
        For_each<int*, void(*)(int)>(arr, arr + 5, PrintInt);
        cout << endl;

        string sarr[3] = { "abc", "ABC", "Hello!" };
        For_each<string*, void(*)(string)>(sarr, sarr + 3, PrintString);
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-18
#pragma region S4_19
namespace S4_19
{
    template<typename IterT, typename Func>
    void For_each(IterT begin, IterT end, Func pf)
    {
        while (begin != end)
        {
            pf(*begin++);
        }
    }
    template<typename T>
    void Print(T data)
    {
        cout << data << " ";
    }

    int main(void)
    {
        int arr[5] = { 10, 20, 30, 40, 50 };
        For_each(arr, arr + 5, Print<int>);
        cout << endl;

        string sarr[3] = { "abc", "ABC", "Hello" };
        For_each(sarr, sarr + 3, Print<string>);
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-19
#pragma region S4_20
namespace S4_20
{
    template<typename IterT, typename Func>
    void For_each(IterT begin, IterT end, Func pf)
    {
        while (begin != end)
        {
            pf(*begin++);
        }
    }
    template<typename T>
    struct PrintFunctor
    {
        string sep;
        explicit PrintFunctor(const string& s = " ") : sep(s) { }
        void operator()(T data) const { cout << data << sep; }
    };

    int main(void)
    {
        int arr[5] = { 10, 20, 30, 40, 50 };
        For_each(arr, arr + 5, PrintFunctor<int>());
        cout << endl;

        string sarr[3] = { "abc", "ABC", "Hello!" };
        For_each(sarr, sarr + 3, PrintFunctor<string>("*\n"));
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-20
#pragma region S4_21
namespace S4_21
{
    template<typename T>
    struct Less
    {
        bool operator()(T a, T b) { return a < b; }
    };
    template<typename T>
    struct Greater
    {
        bool operator()(T a, T b) { return a > b; }
    };

    int main(void)
    {
        cout << Less<int>()(10, 20) << endl;
        cout << Less<int>()(20, 10) << endl;
        cout << Greater<int>()(10, 20) << endl;
        cout << Greater<int>()(20, 10) << endl;
        cout << endl;
        cout << less<int>()(10, 20) << endl;
        cout << less<int>()(20, 10) << endl;
        cout << greater<int>()(10, 20) << endl;
        cout << greater<int>()(20, 10) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-21

int main(void)
{
    S4_21::main();
}

/*
#pragma region S4_2
namespace S4_2
{


    int main(void)
    {


        system("pause");
        return 0;
    }
}
#pragma endregion Sample 4-2
*/