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

        cout << "v[iterator �б� ����] : ";
        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        cout << "v[const iterator �б� ����] : ";
        for (vector<int>::const_iterator citer = v.begin(); citer != v.end(); ++citer)
            cout << *citer << " ";
        cout << endl;

        vector<int>::iterator iter = v.begin();
        vector<int>::const_iterator citer = v.begin();

        *iter = 100; // ���� ����!
        //*citer = 100; ���� �Ұ���! ����- ��� iterator�� ����Ű�� ���� ���� �Ұ�!

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

        //iter�� ��� ����
        *iter = 100; // ����Ű�� ���� ���� ����
        ++iter; // �ݺ��� ���� ����

        //citer
        //*citer = 200; // ����Ű�� ���� ���� �Ұ���
        ++citer; // �ݺ��� ���� ����

        //const_iter
        *const_iter = 300; // ����Ű�� ���� ���� ����
        //++const_iter; // �ݺ��� ���� �Ұ���

        //const_citer
        //*const_citer = 400; // ����Ű�� ���� ���� �Ұ���
        //++const_citer; // �ݺ��� ���� �Ұ���

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

        viter += 2; // ���� ���� �ݺ��ڴ� [], +=, -= +, -, <, >, <=, >=���� ����
        //liter += 2; ����� �ݺ��ڴ� �Ұ���
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

        //reverse_iterator ����ͷ� ������ �ݺ��ڸ� ������ �ݺ��ڷ� ��ȯ
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

        //vector<int>::reverse_iterator riter(iter)�� ����
        reverse_iterator<vector<int>::iterator> riter(iter);
        //vector<int>::const_reverse_iterator criter(riter)�� ����
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

        vector<int> v2; // size: 0�� vector ����
        //copy(v1.begin(), v1.end(), v2.begin() ); //����!
        //insert_iterator<vector<int> > insert(v2, v2.begin());
        //copy(v1.begin(), v1.end(), insert ); ��ü ���� �� ȣ��
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

        //ǥ�� ��Ʈ������ ������ �Է¹޾� v�� ����.
        copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter<vector<int> >(v));

        cout << "v : ";
        copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
        cout << endl;

        // ������ ��Ʈ�� ��(Ctrl-D)���� �Է� �޾� ȭ�鿡 ����մϴ�.
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

        cout << "[v.begin(), v.end())�� ���� ����: " <<
            distance(v.begin(), v.end()) << endl; //v.end()-v.begin()
        cout << "[lt.begin(), lt.end())�� ���� ����: " <<
            distance(lt.begin(), lt.end()) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 10-12
#pragma region S10_13
namespace S10_13
{
    //STL�� �� �ݺ��� ������ Ȯ���ϱ� ���� Ư¡ ���� Ŭ������ iterator_traits ����.
    template<class Iter>
    struct iterator_traits
    {
        typedef typename Iter::iterator_category iterator_category;
        typedef typename Iter::value_type value_type;
        typedef typename Iter::difference_type difference_type;
        typedef typename Iter::pointer pointer;
        typedef typename Iter::reference reference;
    };

    //STL�� �� �ݺ��ڸ� �����ϱ� ���� �ݺ��� ��ũ(tag)�� ����.
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
        class Iterator // Vector�� �ݺ���
        {
        public:
            // STL �ݺ��ڴ� �Ʒ� �ڽŸ��� 5���� ������ ����
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
        class Iterator // List�� �ݺ���
        {
        public:
            // STL �ݺ��ڴ� �Ʒ� �ڽŸ��� 5���� ������ ����
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

    // �Է� �ݺ���, ��� �ݺ��� Ȥ�� ������ �ݺ��ڿ� �´� ���� ����.

    // ����� �ݺ��� Advance() �����ε� ����
    template<typename Iter>
    void _Advance(Iter& iter, int n, bidirectional_iterator_tag category_tag)
    {
        for (int i = 0; i < n; ++i)
            ++iter;
        std::cout << "����� �ݺ��� ������ advance() ++iter ����" << std::endl;
    }
    // ���� ���� �ݺ��� Advance() �����ε� ����
    template<typename Iter>
    void _Advance(Iter& iter, int n, random_access_iterator_tag category_tag)
    {
        iter += n;
        std::cout << "���� ���� �ݺ��� ������ advance() iter += n ����" << std::endl;
    }
    // Advance() �ݺ��� ���� �Լ�
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

        Advance(viter, 2); //vector�� �ݺ��� �̵�
        Advance(liter, 2); //list�� �ݺ��� �̵�

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