#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;

#pragma region S10_1
namespace S10_1
{
    int main(void)
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        cout << "v[iterator 읽기 가능] : ";
        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        cout << "v[const iterator 읽기 가능] : ";
        for (vector<int>::const_iterator citer = v.begin(); citer != v.end(); ++citer)
            cout << *citer << " ";
        cout << endl;

        vector<int>::iterator iter = v.begin();
        vector<int>::const_iterator citer = v.begin();

        *iter = 100; // 쓰기 가능!
        //*citer = 100; 쓰기 불가능! 에러- 상수 iterator로 가리키는 원소 수정 불가!

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-1
#pragma region S10_2
namespace S10_2
{
    int main(void)
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);

        vector<int>::iterator iter = v.begin();
        vector<int>::const_iterator citer = v.begin() + 1;
        const vector<int>::iterator const_iter = v.begin() + 2;
        const vector<int>::const_iterator const_citer = v.begin() + 3;

        //iter는 모두 가능
        *iter = 100; // 가리키는 원소 변경 가능
        ++iter; // 반복자 변경 가능

        //citer
        //*citer = 200; // 가리키는 원소 변경 불가능
        ++citer; // 반복자 변경 가능

        //const_iter
        *const_iter = 300; // 가리키는 원소 변경 가능
        //++const_iter; // 반복자 변경 불가능

        //const_citer
        //*const_citer = 400; // 가리키는 원소 변경 불가능
        //++const_citer; // 반복자 변경 불가능

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-2
#pragma region S10_3
namespace S10_3
{
    class Point
    {
        int x;
        int y;
    public:
        explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
        void Print() const { cout << x << ',' << y << endl; }
    };

    int main(void)
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);

        list<int> lt;
        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);

        vector<int>::iterator viter = v.begin();
        list<int>::iterator liter = lt.begin();

        cout << "vector: " << *viter << endl;
        cout << "list: " << *liter << endl;

        cout << "vector: " << *viter << endl;
        cout << "list: " << *liter << endl;

        cout << "vector: " << *++viter << endl;
        cout << "list: " << *++liter << endl;

        cout << "vector: " << *--viter << endl;
        cout << "list: " << *--liter << endl;

        viter += 2; // 임의 접근 반복자는 [], +=, -= +, -, <, >, <=, >=연산 가능
        //liter += 2; 양방향 반복자는 불가능
        cout << "=====================" << endl;


        vector<Point> ptVector;
        ptVector.push_back(Point(2, 5));

        list<Point> ptList;
        ptList.push_back(Point(2, 5));

        vector<Point>::iterator ptVIter = ptVector.begin();
        ptVIter->Print();
        list<Point>::iterator ptLIter = ptList.begin();
        ptLIter->Print();

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-3
#pragma region S10_4
namespace S10_4
{
    int main(void)
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        cout << "v[iterator] : ";
        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        cout << "v[reverse_iterator] : ";
        for (vector<int>::const_reverse_iterator riter = v.rbegin(); riter != v.rend(); ++riter)
            cout << *riter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-4
#pragma region S10_5
namespace S10_5
{
    int main(void)
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        //reverse_iterator 어댑터로 정방향 반복자를 역방향 반복자로 변환
        reverse_iterator<vector<int>::iterator> rbiter(v.end());
        reverse_iterator<vector<int>::iterator> reiter(v.begin());

        cout << "v [rbiter, reiter) : ";
        for (; rbiter != reiter; ++rbiter)
            cout << *rbiter << " ";
        cout << endl;

        cout << "v [rbegin(), rend()) : ";
        for (vector<int>::const_reverse_iterator riter = v.rbegin(); riter != v.rend(); ++riter)
            cout << *riter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-5
#pragma region S10_6
namespace S10_6
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        vector<int>::iterator iter = v.begin() + 1;
        vector<int>::const_iterator citer = iter;

        //vector<int>::reverse_iterator riter(iter)과 같다
        reverse_iterator<vector<int>::iterator> riter(iter);
        //vector<int>::const_reverse_iterator criter(riter)과 같다
        reverse_iterator<vector<int>::const_iterator> criter(riter);

        cout << "iter : " << *iter << endl;
        cout << "citer : " << *citer << endl;
        cout << "riter : " << *riter << endl;
        cout << "criter : " << *criter << endl;
        cout << "===================" << endl;
        cout << "riter.base() => iter: " << *riter.base() << endl;
        cout << "criter.base() => citer: " << *criter.base() << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-6
#pragma region S10_7
namespace S10_7
{
    int main(void)
    {
        vector<int> v1;

        v1.push_back(10);
        v1.push_back(20);
        v1.push_back(30);
        v1.push_back(40);
        v1.push_back(50);

        vector<int> v2; // size: 0인 vector 생성
        //copy(v1.begin(), v1.end(), v2.begin() ); //에러!
        //insert_iterator<vector<int> > insert(v2, v2.begin());
        //copy(v1.begin(), v1.end(), insert ); 객체 생성 후 호출
        copy(v1.begin(), v1.end(), inserter<vector<int> >(v2, v2.begin()));

        cout << "v1 : ";
        for (vector<int>::iterator iter = v1.begin(); iter != v1.end(); ++iter)
            cout << *iter << " ";
        cout << endl;
        cout << "v2 : ";
        for (vector<int>::iterator iter = v2.begin(); iter != v2.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-7
#pragma region S10_8
namespace S10_8
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        list<int> lt1;
        lt1.push_back(1);
        lt1.push_back(2);
        lt1.push_back(3);

        list<int> lt2;
        lt2.push_back(1);
        lt2.push_back(2);
        lt2.push_back(3);

        copy(v.begin(), v.end(), back_inserter<list<int> >(lt1));
        copy(v.begin(), v.end(), front_inserter<list<int> >(lt2));

        cout << "v : ";
        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;
        cout << "lt1 : ";
        for (list<int>::iterator iter = lt1.begin(); iter != lt1.end(); ++iter)
            cout << *iter << " ";
        cout << endl;
        cout << "lt2 : ";
        for (list<int>::iterator iter = lt2.begin(); iter != lt2.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-8
#pragma region S10_9
namespace S10_9
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
        copy(v.begin(), v.end(), ostream_iterator<int>(cout));
        cout << endl;

        cout << "v : ";
        copy(v.begin(), v.end(), ostream_iterator<int>(cout, ", "));
        cout << endl;

        list<int> lt;
        lt.push_back(100);
        lt.push_back(200);
        lt.push_back(300);

        cout << "lt+v : ";
        transform(lt.begin(), lt.end(), v.begin(), ostream_iterator<int>(cout, "  "), plus<int>());
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-9
#pragma region S10_10
namespace S10_10
{
    int main(void)
    {
        vector<int> v;

        //표준 스트림에서 정수를 입력받아 v에 저장.
        copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter<vector<int> >(v));

        cout << "v : ";
        copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
        cout << endl;

        // 정수를 스트림 끝(Ctrl-D)까지 입력 받아 화면에 출력합니다.
        //copy(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout," ") );

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-10
#pragma region S10_11
namespace S10_11
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);

        list<int> lt;

        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);

        vector<int>::iterator viter(v.begin());
        list<int>::iterator liter(lt.begin());

        cout << "viter: " << *viter << endl;
        cout << "liter: " << *liter << endl;

        advance(viter, 2); // viter += 2
        advance(liter, 2);
        cout << "viter: " << *viter << endl;
        cout << "liter: " << *liter << endl;

        advance(viter, -2); // viter -= 2
        advance(liter, -2);
        cout << "viter: " << *viter << endl;
        cout << "liter: " << *liter << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-11
#pragma region S10_12
namespace S10_12
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);

        list<int> lt;

        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);

        cout << "[v.begin(), v.end())의 원소 개수: " <<
            distance(v.begin(), v.end()) << endl; //v.end()-v.begin()
        cout << "[lt.begin(), lt.end())의 원소 개수: " <<
            distance(lt.begin(), lt.end()) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-12
#pragma region S10_13
namespace S10_13
{
    //STL은 각 반복자 형식을 확인하기 위한 특징 정보 클래스인 iterator_traits 제공.
    template<class Iter>
    struct iterator_traits
    {
        typedef typename Iter::iterator_category iterator_category;
        typedef typename Iter::value_type value_type;
        typedef typename Iter::difference_type difference_type;
        typedef typename Iter::pointer pointer;
        typedef typename Iter::reference reference;
    };

    //STL은 각 반복자를 구분하기 위한 반복자 태크(tag)를 제공.
    struct input_iterator_tag {
    };
    struct output_iterator_tag {
    };
    struct forward_iterator_tag :public input_iterator_tag {
    };
    struct bidirectional_iterator_tag :public forward_iterator_tag {
    };
    struct random_access_iterator_tag :public bidirectional_iterator_tag {
    };

    template <typename T>
    class Vector
    {
    public:
        class Iterator // Vector의 반복자
        {
        public:
            // STL 반복자는 아래 자신만의 5가지 정보를 가짐
            typedef random_access_iterator_tag iterator_category;
            typedef T value_type;
            typedef int difference_type;
            typedef T* pointer;
            typedef T& reference;
            //...
            void operator +=(int) { }
        };
        void Push_back(const T& data) { }
        Iterator Begin() { return Iterator(); }
    };
    template <typename T>
    class List
    {
    public:
        class Iterator // List의 반복자
        {
        public:
            // STL 반복자는 아래 자신만의 5가지 정보를 가짐
            typedef bidirectional_iterator_tag iterator_category;
            typedef T value_type;
            typedef int difference_type;
            typedef T* pointer;
            typedef T& reference;
            //...
            void operator++() { }
        };
        void Push_back(const T& data) { }
        Iterator Begin() { return Iterator(); }
    };

    // 입력 반복자, 출력 반복자 혹은 순방향 반복자에 맞는 버전 구현.

    // 양방향 반복자 Advance() 오버로딩 버전
    template<typename Iter>
    void _Advance(Iter& iter, int n, bidirectional_iterator_tag category_tag)
    {
        for (int i = 0; i < n; ++i)
            ++iter;
        std::cout << "양방향 반복자 버전의 advance() ++iter 실행" << std::endl;
    }
    // 임의 접근 반복자 Advance() 오버로딩 버전
    template<typename Iter>
    void _Advance(Iter& iter, int n, random_access_iterator_tag category_tag)
    {
        iter += n;
        std::cout << "임의 접근 반복자 버전의 advance() iter += n 실행" << std::endl;
    }
    // Advance() 반복자 보조 함수
    template<typename Iter>
    void Advance(Iter& iter, int n)
    {
        _Advance(iter, n, iterator_traits<Iter>::iterator_category());
    }

    int main(void)
    {
        Vector<int> v;

        v.Push_back(10);
        v.Push_back(20);
        v.Push_back(30);

        List<int> lt;

        lt.Push_back(10);
        lt.Push_back(20);
        lt.Push_back(30);

        Vector<int>::Iterator viter(v.Begin());
        List<int>::Iterator liter(lt.Begin());

        Advance(viter, 2); //vector의 반복자 이동
        Advance(liter, 2); //list의 반복자 이동

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-13


int main(void)
{
    S10_1::main();
}

/*
#pragma region S10_
namespace S10_
{
    int main(void)
    {


        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-
*/