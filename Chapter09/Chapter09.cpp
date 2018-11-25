#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

#pragma region S9_1
namespace S9_1
{
    struct LessFunctor // 1. 함수 객체 조건자
    {
        bool operator()(int left, int right) const
        {
            return left < right;
        }
    };
    bool LessFun(int left, int right) // 2. 함수 조건자
    {
        return left < right;
    }

    int main(void)
    {
        bool(*LessPtr)(int, int) = LessFun; // 3. 함수 포인터 조건자
        LessFunctor lessFunctor;

        //모두 bool 형식을 반환
        //1. 함수 객체로 10과 20을 비교
        cout << lessFunctor(10, 20) << endl;

        //2. 함수로 10과 20을 비교
        cout << LessFun(10, 20) << endl;

        //3. 함수 포인터로 10과 20을 비교
        cout << LessPtr(10, 20) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-1
#pragma region S9_2
namespace S9_2
{
    template<typename T>
    struct Plus
    {
        T operator( )(const T& left, const T& right) const
        {
            return left + right;
        }
    };

    int main(void)
    {
        vector<int> v1;

        v1.push_back(10);
        v1.push_back(20);
        v1.push_back(30);

        vector<int> v2;

        v2.push_back(1);
        v2.push_back(2);
        v2.push_back(3);

        vector<int> v3(3); //size: 3인 vector 생성

        //STL 조건자 plus<int> 사용
        //transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), plus<int>());
        //사용자 정의 조건자 Plus<int> 사용
        transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), Plus<int>());

        cout << "v1 : ";
        for (vector<int>::size_type i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
        cout << endl;

        cout << "v2 : ";
        for (vector<int>::size_type i = 0; i < v2.size(); i++)
            cout << v2[i] << " ";
        cout << endl;

        cout << "v3 : ";
        for (vector<int>::size_type i = 0; i < v3.size(); i++)
            cout << v3[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-2
#pragma region S9_3
namespace S9_3
{
    template<typename T>
    struct Plus
    {
        T operator( )(const T& left, const T& right) const
        {
            return left + right;
        }
    };

    int main(void)
    {
        vector<int> v1;
        v1.push_back(10);
        v1.push_back(20);
        v1.push_back(30);

        vector<int> v3(3); //size: 3인 vector 생성
        //STL 조건자 plus<int> 사용
        transform(v1.begin(), v1.end(), v3.begin(), binder1st< plus<int> >(plus<int>(), 100));
        //사용자 정의 조건자 Plus<int> 사용
        //transform(v1.begin(), v1.end(), v3.begin(), binder1st< Plus<int> > (Plus<int>(), 100) );

        cout << "v1 : ";
        for (vector<int>::size_type i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
        cout << endl;

        cout << "v3 : ";
        for (vector<int>::size_type i = 0; i < v3.size(); i++)
            cout << v3[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-3
#pragma region S9_4
namespace S9_4
{
    template<typename T>
    struct Plus
    {
        typedef T first_argument_type;
        typedef T second_argument_type;
        typedef T result_type;

        T operator( )(const T& left, const T& right) const
        {
            return left + right;
        }
    };

    int main(void)
    {
        vector<int> v1;
        v1.push_back(10);
        v1.push_back(20);
        v1.push_back(30);

        vector<int> v3(3); //size: 3인 vector 생성
        //STL 조건자 plus<int> 사용
        //transform(v1.begin(), v1.end(), v3.begin(), binder1st< plus<int> > (plus<int>(), 100));
        //사용자 정의 조건자 Plus<int> 사용
        transform(v1.begin(), v1.end(), v3.begin(), binder1st< Plus<int> >(Plus<int>(), 100));

        cout << "v1 : ";
        for (vector<int>::size_type i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
        cout << endl;

        cout << "v3 : ";
        for (vector<int>::size_type i = 0; i < v3.size(); i++)
            cout << v3[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-4
#pragma region S9_5
namespace S9_5
{
    template<typename T>
    struct Plus : public binary_function<T, T, T>
    {
        T operator( )(const T& left, const T& right) const
        {
            return left + right;
        }
    };

    int main(void)
    {
        vector<int> v1;
        v1.push_back(10);
        v1.push_back(20);
        v1.push_back(30);

        vector<int> v3(3); //size: 3인 vector 생성
        //STL 조건자 plus<int> 사용
        //transform(v1.begin(), v1.end(), v3.begin(), binder1st< plus<int> > (plus<int>(), 100));
        //사용자 정의 조건자 Plus<int> 사용
        transform(v1.begin(), v1.end(), v3.begin(), binder1st< Plus<int> >(Plus<int>(), 100));

        cout << "v1 : ";
        for (vector<int>::size_type i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
        cout << endl;

        cout << "v3 : ";
        for (vector<int>::size_type i = 0; i < v3.size(); i++)
            cout << v3[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-5
#pragma region S9_6
namespace S9_6
{
    int main(void)
    {
        plus<int> oPlus;
        //1. oPlus 객체로 10, 20 더하기. 암묵적 호출
        cout << oPlus(10, 20) << endl;
        //2. oPlus 객체로 10, 20 더하기. 명시적 호출
        cout << oPlus.operator()(10, 20) << endl;

        //3. 임시 객체로 10, 20 더하기. 암묵적 호출(일반적인 사용)
        cout << plus<int>()(10, 20) << endl;
        //4. 임시 객체로 10, 20 더하기. 명시적 호출
        cout << plus<int>().operator()(10, 20) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-6
#pragma region S9_7
namespace S9_7
{
    template<typename T>
    struct Plus : public binary_function<T, T, T> //어댑터 적용이 가능하도록.
    {
        T operator( )(const T& left, const T& right) const
        {
            return left + right;
        }
    };

    int main(void)
    {
        Plus<int> oPlus;
        cout << oPlus(10, 20) << endl;
        cout << oPlus.operator()(10, 20) << endl;

        cout << Plus<int>()(10, 20) << endl;
        cout << Plus<int>().operator()(10, 20) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-7
#pragma region S9_8
namespace S9_8
{
    int main(void)
    {
        vector<int> v1;
        v1.push_back(10);
        v1.push_back(20);
        v1.push_back(30);
        v1.push_back(40);
        v1.push_back(50);

        vector<int> v2;
        v2.push_back(1);
        v2.push_back(2);
        v2.push_back(3);
        v2.push_back(4);
        v2.push_back(5);

        vector<int> v3(5); //size: 5인 vector 생성

        transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), plus<int>());
        cout << "v3(v1+v2) : ";
        for (vector<int>::size_type i = 0; i < v3.size(); i++)
            cout << v3[i] << " ";
        cout << endl;

        transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), multiplies<int>());
        cout << "v3(v1*v2) : ";
        for (vector<int>::size_type i = 0; i < v3.size(); i++)
            cout << v3[i] << " ";
        cout << endl;

        transform(v1.begin(), v1.end(), v3.begin(), negate<int>());
        cout << "v3(-v1) : ";
        for (vector<int>::size_type i = 0; i < v3.size(); i++)
            cout << v3[i] << " ";
        cout << endl;

        adjacent_difference(v1.begin(), v1.end(), v3.begin(), minus<int>());
        cout << "v3(v1 인접 원소와의 차) : ";
        for (vector<int>::size_type i = 0; i < v3.size(); i++)
            cout << v3[i] << " ";
        cout << endl;


        partial_sum(v1.begin(), v1.end(), v3.begin(), multiplies<int>());
        cout << "v3(v1 원소의 곱 누적) : ";
        for (vector<int>::size_type i = 0; i < v3.size(); i++)
            cout << v3[i] << " ";
        cout << endl;

        cout << "v1 모든 원소의 곱: " << accumulate(v1.begin(), v1.end(), 1, multiplies<int>()) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-8
#pragma region S9_9
namespace S9_9
{
    int main(void)
    {
        less<int> oLess;
        //1. oLess 객체로 10, 20을 비교 true. 암묵적 호출
        cout << oLess(10, 20) << endl;
        //2. oLess 객체로 10, 20을 비교 true.  명시적 호출
        cout << oLess.operator()(10, 20) << endl;

        //3. 임시 객체로 10, 20을 비교 true. 암묵적 호출(일반적인 사용)
        cout << less<int>()(10, 20) << endl;
        //4. 임시 객체로 10, 20을 비교 true. 명시적 호출
        cout << less<int>().operator()(10, 20) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-9
#pragma region S9_10
namespace S9_10
{
    template<typename T>
    struct Less : public binary_function<T, T, bool> //어댑터 적용이 가능하도록.
    {
        bool operator( )(const T& left, const T& right) const
        {
            return left < right;
        }
    };

    int main(void)
    {
        Less<int> oLess;
        cout << oLess(10, 20) << endl;
        cout << oLess.operator()(10, 20) << endl;

        cout << Less<int>()(10, 20) << endl;
        cout << Less<int>().operator()(10, 20) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-10
#pragma region S9_11
namespace S9_11
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        cout << "v : ";
        for (vector<int>::size_type i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;

        cout << "20 보다 작은 원소의 개수: " << count_if(v.begin(), v.end(),
            bind2nd<less<int> >(less<int>(), 20)) << endl;
        cout << "20 보다 작거나 같은 원소의 개수: " << count_if(v.begin(), v.end(),
            bind2nd<less_equal<int> >(less_equal<int>(), 20)) << endl;
        cout << "20 보다 큰 원소의 개수: " << count_if(v.begin(), v.end(),
            bind2nd<greater<int> >(greater<int>(), 20)) << endl;
        cout << "20 보다 크거나 같은 원소의 개수: " << count_if(v.begin(), v.end(),
            bind2nd<greater_equal<int> >(greater_equal<int>(), 20)) << endl;
        cout << "20과 같은 원소의 개수: " << count_if(v.begin(), v.end(),
            bind2nd<equal_to<int> >(equal_to<int>(), 20)) << endl;
        cout << "20과 다른 원소의 개수: " << count_if(v.begin(), v.end(),
            bind2nd<not_equal_to<int> >(not_equal_to<int>(), 20)) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-11
#pragma region S9_12
namespace S9_12
{
    template<typename T>
    struct Logical_and : public binary_function<T, T, bool> //어댑터 적용이 가능하도록.
    {
        bool operator( )(const T& left, const T& right) const
        {
            return left && right;
        }
    };

    int main(void)
    {
        int n = 30;
        logical_and<bool> oAnd;
        //1. oAnd 객체로 10 < n < 50 인가? true. 암묵적 호출
        cout << oAnd(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
        //2. oAnd 객체로 10 < n < 50 인가? true.  명시적 호출
        cout << oAnd.operator()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;

        //3. 임시 객체로 10 < n < 50 인가? true. 암묵적 호출(일반적인 사용)
        cout << logical_and<bool>()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
        //4. 임시 객체로 10 < n < 50 인가? true. 명시적 호출
        cout << logical_and<bool>().operator()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-12
#pragma region S9_13
namespace S9_13
{
    int main(void)
    {
        //less의 첫 인자를 10으로 고정한 단항 조건자 binder 생성.
        binder1st< less<int> > binder = bind1st(less<int>(), 10);

        // binder는 첫 번째 인자를 10으로 고정한 less. 
        cout << binder(5) << ':' << less<int>()(10, 5) << endl; // 두 문장이 동일합니다.
        cout << binder(10) << ':' << less<int>()(10, 10) << endl;// 두 문장이 동일합니다.
        cout << binder(20) << ':' << less<int>()(10, 20) << endl;// 두 문장이 동일합니다.
        cout << "=====위와 같음=====" << endl;
        // 임시 객체 사용
        cout << bind1st(less<int>(), 10)(5) << ':' << less<int>()(10, 5) << endl;
        cout << bind1st(less<int>(), 10)(10) << ':' << less<int>()(10, 10) << endl;
        cout << bind1st(less<int>(), 10)(20) << ':' << less<int>()(10, 20) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-13
#pragma region S9_14
namespace S9_14
{
    int main(void)
    {
        //less의 두 번째 인자를 10으로 고정한 단항 조건자 binder 생성.
        binder2nd< less<int> > binder = bind2nd(less<int>(), 10);

        // binder는 두 번째 인자를 10으로 고정한 less. 
        cout << binder(5) << ':' << less<int>()(5, 10) << endl; // 두 문장이 동일합니다.
        cout << binder(10) << ':' << less<int>()(10, 10) << endl;// 두 문장이 동일합니다.
        cout << binder(20) << ':' << less<int>()(20, 10) << endl;// 두 문장이 동일합니다.
        cout << "=====위와 같음=====" << endl;
        // 임시 객체 사용.
        cout << bind2nd(less<int>(), 10)(5) << ':' << less<int>()(5, 10) << endl;
        cout << bind2nd(less<int>(), 10)(10) << ':' << less<int>()(10, 10) << endl;
        cout << bind2nd(less<int>(), 10)(20) << ':' << less<int>()(20, 10) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-14
#pragma region S9_15
namespace S9_15
{
    int main(void)
    {
        less<int> oLess;
        binary_negate< less<int> > negate = not2(less<int>());

        cout << negate(5, 10) << ':' << not2(oLess)(5, 10) << ':' << not2(less<int>())(5, 10) << endl; //모두 같다.
        cout << negate(10, 10) << ':' << not2(oLess)(10, 10) << ':' << not2(less<int>())(10, 10) << endl; //모두 같다.
        cout << negate(20, 10) << ':' << not2(oLess)(20, 10) << ':' << not2(less<int>())(20, 10) << endl; //모두 같다.

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-15
#pragma region S9_16
namespace S9_16
{
    int main(void)
    {
        binder2nd< less<int> > binder = bind2nd(less<int>(), 10);
        unary_negate< binder2nd<less<int> > > negate = not1(binder);

        cout << negate(5) << ':' << not1(binder)(5) << ':' << not1(bind2nd(less<int>(), 10))(5) << endl; //모두 같다.
        cout << negate(10) << ':' << not1(binder)(10) << ':' << not1(bind2nd(less<int>(), 10))(10) << endl;//모두 같다.
        cout << negate(20) << ':' << not1(binder)(20) << ':' << not1(bind2nd(less<int>(), 10))(20) << endl;//모두 같다.

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-16
#pragma region S9_17
namespace S9_17
{
    bool Pred(int n)
    {
        return 30 <= n && n <= 40;
    }

    int main(void)
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        cout << "v : ";
        for (vector<int>::size_type i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;

        cout << "30이상 40이하의 원소 개수: " << count_if(v.begin(), v.end(), Pred) << endl;
        //다음은 에러입니다. not1은 어댑터로 함수 객체에 argument_type, result_type가 정의되어 있어야 함!
        cout << "30이상 40이하가 아닌 원소 개수: " << count_if(v.begin(), v.end(), not1(Pred)) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-17
#pragma region S9_18
namespace S9_18
{
    bool Pred(int n)
    {
        return 30 <= n && n <= 40;
    }

    int main(void)
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        cout << "v : ";
        for (vector<int>::size_type i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;

        cout << "30이상 40이하의 원소 개수: " << count_if(v.begin(), v.end(), Pred) << endl;
        //가능~!
        cout << "30이상 40이하가 아닌 원소 개수: " << count_if(v.begin(), v.end(), not1(ptr_fun(Pred))) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-18
#pragma region S9_19
namespace S9_19
{
    //////////////////// server ///////////////////
    // 클래스 : ptr_fun()의 함수 객체 클래스
    // 여러가지 기능을 제공할 수 있습니다. argument_type, result_type 등....
    template<typename RType, typename AType>
    class Ptr_fun_class :public unary_function<AType, RType>
    {
        RType(*pf)(AType);
    public:
        Ptr_fun_class(RType(*_pf)(AType)) :pf(_pf) { }
        RType operator()(AType n) const
        {
            return pf(n);
        }
    };
    // 일반 함수를 함수 객체로 변환하는 ptr_fun() 함수
    template <typename RType, typename AType>
    Ptr_fun_class<RType, AType> Ptr_fun(RType(*pf)(AType))
    {
        return Ptr_fun_class<RType, AType>(pf);
    }
    /////////// client ///////////////////
    bool Pred(int n)
    {
        return 30 <= n && n <= 40;
    }

    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        cout << "v : ";
        for (vector<int>::size_type i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;

        cout << "30이상 40이하의 원소 개수: " << count_if(v.begin(), v.end(), Pred) << endl;
        //가능~!
        cout << "30이상 40이하가 아닌 원소 개수: " << count_if(v.begin(), v.end(), not1(Ptr_fun(Pred))) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-19
#pragma region S9_20
namespace S9_20
{
    class Point
    {
        int x;
        int y;
    public:
        explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
        int GetX() const { return x; }
        int GetY() const { return y; }
    };

    int main(void)
    {
        vector<Point> v;

        v.push_back(Point(1, 1));
        v.push_back(Point(2, 2));
        v.push_back(Point(3, 3));
        v.push_back(Point(4, 4));
        v.push_back(Point(5, 5));

        // 호출 불가능
        //for_each(v.begin(), v.end(), &Point::Print );
        // 호출 가능
        for_each(v.begin(), v.end(), mem_fun_ref(&Point::Print));

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-20
#pragma region S9_21
namespace S9_21
{
    ///////////////////////server////////////////////////
    //객체의 멤버 함수를 호출할 수 있는 함수 객체 클래스
    template <typename RType, typename CType>
    class Mem_fun_ref_class : public unary_function<CType, RType>
    {
        RType(CType::*pf)() const;
    public:
        Mem_fun_ref_class(RType(CType::*_pf)() const) :pf(_pf) {}
        RType operator()(const CType& o) const
        {
            return (o.*pf)();
        }
    };
    // 어댑터 함수 : 멤버 함수를 주소를 저장하는 함수 객체를 반환
    template <typename RType, typename CType>
    Mem_fun_ref_class<RType, CType> Mem_fun_ref(RType(CType::*pf) () const)
    {
        return Mem_fun_ref_class<RType, CType>(pf);
    }
    ////////////////////////client/////////////////////////////
    class Point
    {
        int x;
        int y;
    public:
        explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
        int GetX() const { return x; }
        int GetY() const { return y; }
    };

    int main(void)
    {
        vector<Point> v;

        v.push_back(Point(1, 1));
        v.push_back(Point(2, 2));
        v.push_back(Point(3, 3));
        v.push_back(Point(4, 4));
        v.push_back(Point(5, 5));

        for_each(v.begin(), v.end(), Mem_fun_ref(&Point::Print));

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-21
#pragma region S9_22
namespace S9_22
{
    ///////////////////////server////////////////////////
    //객체의 멤버 함수를 호출할 수 있는 함수 객체 클래스
    template <typename RType, typename CType>
    class Mem_fun_class : public unary_function<CType, RType>
    {
        RType(CType::*pf)() const;
    public:
        Mem_fun_class(RType(CType::*_pf)() const) :pf(_pf) {}
        RType operator()(const CType* p) const
        {
            return (p->*pf)();
        }
    };
    // 어댑터 함수 : 멤버 함수를 주소를 저장하는 함수 객체를 반환
    template <typename RType, typename CType>
    Mem_fun_class<RType, CType> Mem_fun(RType(CType::*pf) () const)
    {
        return Mem_fun_class<RType, CType>(pf);
    }
    ////////////////////////client/////////////////////////////
    class Point
    {
        int x;
        int y;
    public:
        explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
        int GetX() const { return x; }
        int GetY() const { return y; }
    };

    int main(void)
    {
        vector<Point*> v;

        v.push_back(new Point(1, 1));
        v.push_back(new Point(2, 2));
        v.push_back(new Point(3, 3));
        v.push_back(new Point(4, 4));
        v.push_back(new Point(5, 5));

        //STL 버전
        for_each(v.begin(), v.end(), mem_fun(&Point::Print));
        //사용자 버전
        for_each(v.begin(), v.end(), Mem_fun(&Point::Print));
        // 객체 delete 생략

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-22


int main(void)
{
    S9_1::main();
}

/*
#pragma region S9_
namespace S9_
{


    int main(void)
    {


        system("pause");
        return 0;
    }
}
#pragma endregion Sample 9-
*/