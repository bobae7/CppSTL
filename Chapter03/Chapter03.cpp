#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

#pragma region S3_01
namespace S3_01
{
    void Print()
    {
        cout << "전역함수!" << endl;
    }
    struct Functor
    {
        void operator()()
        {
            cout << "함수 객체!" << endl;
        }
    };

    int main(void)
    {
        Functor functor;

        Print();        // 전역 함수 호출
        functor();      // 맴버 함수 호출 fuctor.operator()와 같다;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 3-1
#pragma region S3_02
namespace S3_02
{
    void Print(int a, int b)
    {
        cout << "전역함수: " << a << ',' << b << endl;
    }
    struct Functor
    {
        void operator()(int a, int b)
        {
            cout << "함수객체: " << a << ',' << b << endl;
        }
    };

    int main(void)
    {
        Functor functor;

        Print(10, 20);          // 전역 함수 호출
        functor(10, 20);        // 멤버 함수 호출 functor.operator()(10, 20) 와 같다;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 3-2
#pragma region S3_03
namespace S3_03
{
    class Adder
    {
        int total;
    public:
        explicit Adder(int n = 0) :total(n) { }
        int operator()(int n)
        {
            return total += n;
        }
    };

    int main(void)
    {
        Adder add(0);               // 초깃값 0

        cout << add(10) << endl;    // 10을 누적 => 10
        cout << add(20) << endl;    // 20을 누적 => 30
        cout << add(30) << endl;    // 30을 누적 -> 63

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 3-3
#pragma region S3_04
namespace S3_04
{
    struct Functor1
    {
        void operator()(int n)
        {
            cout << n << " ";
        }
    };
    struct Functor2
    {
        void operator()(int n)
        {
            cout << n * n << " ";
        }
    };
    struct Functor3
    {
        void operator()(int n)
        {
            cout << "정수 : " << n << endl;
        }
    };

    int main(void)
    {
        int arr[5] = { 10, 20, 30, 40, 50 };

        for_each(arr, arr + 5, Functor1());

        cout << endl << endl;
        for_each(arr, arr + 5, Functor2());

        cout << endl << endl;
        for_each(arr, arr + 5, Functor3());

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 3-4
#pragma region S3_05
namespace S3_05
{
    bool Pred_less(int a, int b)
    {
        return a < b;
    }
    struct Less
    {
        bool operator()(int a, int b)
        {
            return a < b;
        }
    };

    int main(void)
    {
        Less l;

        cout << Pred_less(10, 20) << endl;
        cout << Pred_less(20, 10) << endl;
        cout << endl;
        cout << l(10, 20) << endl;          // l 객체로 암묵적 함수 호출
        cout << l(20, 10) << endl;          // l 객체로 암묵적 함수 호출
        cout << Less()(10, 20) << endl;     // 임시 객체로 암묵적 함수 호출
        cout << Less()(20, 10) << endl;     // 임시 객체로 암묵적 함수 호출
        cout << endl;
        cout << l.operator()(10, 20) << endl;   // 명시적 호출
        cout << l.operator()(20, 10) << endl;   // 명시적 호출

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 3-5
#pragma region S3_06
namespace S3_06
{
    typedef less<int> Less;

    int main(void)
    {
        Less l;

        cout << l(10, 20) << endl;                  // l 객체로 암시적 함수 호출
        cout << l(20, 10) << endl;                  // l 객체로 암시적 함수 호출
        cout << l.operator()(10, 20) << endl;       // l 객체로 명시적 함수 호출
        cout << endl;
        cout << Less()(10, 20) << endl;             // 임시 객체로 암시적 함수 호출
        cout << Less()(20, 10) << endl;             // 임시 객체로 암시적 함수 호출
        cout << Less().operator()(10, 20) << endl;  // 임시 객체로 명시적 함수 호출

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 3-6
#pragma region S3_07
namespace S3_07
{
    struct Less
    {
        bool operator()(int a, int b)
        {
            return a < b;
        }
    };
    struct Greater
    {
        bool operator()(int a, int b)
        {
            return a > b;
        }
    };

    int main(void)
    {
        cout << Less()(10, 20) << endl;             // 사용자 Less, Greaer 사용
        cout << Less()(20, 10) << endl;
        cout << Greater()(10, 20) << endl;
        cout << Greater()(20, 10) << endl;
        cout << endl;
        cout << less<int>()(10, 20) << endl;        // STL의 less, greatre 사용
        cout << less<int>()(20, 10) << endl;
        cout << greater<int>()(10, 20) << endl;
        cout << greater<int>()(20, 10) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 3-7
#pragma region S3_08
namespace S3_08
{
    struct Plus
    {
        int operator()(int a, int b)
        {
            return a + b;
        }
    };
    struct Minus
    {
        int operator()(int a, int b)
        {
            return a - b;
        }
    };

    int main(void)
    {
        cout << Plus()(10, 20) << endl;                 // 사용자 Plus, Minus 사용
        cout << Plus()(20, 10) << endl;
        cout << Minus()(10, 20) << endl;
        cout << Minus()(20, 10) << endl;
        cout << endl;
        cout << plus<int>()(10, 20) << endl;            // STL의 plus, minus 사용
        cout << plus<int>()(20, 10) << endl;            // STL의 plus, minus 사용
        cout << minus<int>()(10, 20) << endl;           // STL의 plus, minus 사용
        cout << minus<int>()(20, 10) << endl;           // STL의 plus, minus 사용

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 3-8
#pragma region E3_03
namespace E3_03
{
    struct Compare
    {
        bool operator()(int a, int b)
        {
            return a == b;
        }
    };

    int main(void)
    {
        Compare cmp;

        if (cmp(10, 20))
        {
            cout << "같다!" << endl;
        }
        else
        {
            cout << "다르다!" << endl;
        }

        system("pause");
        return 0;
    }
}
#pragma endregion Excercise 3-1
#pragma region E3_03
namespace E3_04
{
    struct Adder
    {
        int operator()(int a, int b)
        {
            return a + b;
        }
    };

    int main(void)
    {
        Adder add;
        int sum = add(10, 20);
        cout << "sum = " << sum << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Excercise 3-5

int main(void)
{
    //return S3_08::main();
    return E3_04::main();
}