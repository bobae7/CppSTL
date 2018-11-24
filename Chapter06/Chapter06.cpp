#include <iostream>
#include <vector>

using namespace std;

#pragma region S6_1
namespace S6_1
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        for (int i = 0; i < v.size(); ++i)
            cout << v[i] << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-1
#pragma region S6_2
namespace S6_2
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        cout << v.back() << endl;
        cout << *v.begin() << endl;
        cout << *(v.end() - 1) << endl;

        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << endl;

        cout << typeid(vector<int>::size_type).name() << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-2
#pragma region S6_3
namespace S6_3
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;

        cout << v.size() << endl;
        cout << v.capacity() << endl;
        cout << v.max_size() << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-3
#pragma region S6_4
namespace S6_4
{
    int main(void)
    {
        vector<int> v;

        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(10);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(20);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(30);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(40);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(50);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(60);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(70);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(80);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(90);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;

        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-4
#pragma region S6_5
namespace S6_5
{
    int main(void)
    {
        vector<int> v;

        v.reserve(8);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(10);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(20);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(30);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(40);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(50);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(60);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(70);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(80);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
        v.push_back(90);
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;

        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-5
#pragma region S6_6
namespace S6_6
{
    int main(void)
    {
        vector<int> v1(5, 7); //0으로 초기화된 size가 5인 컨테이너
        v1.push_back(10); //10 추가
        v1.push_back(20); //20 추가
        v1.push_back(30); //30 추가
        v1.push_back(40); //40 추가
        v1.push_back(50); //50 추가

        cout << "capacity: " << v1.capacity() << endl;
        cout << "size: " << v1.size() << endl;
        cout << "begin: " << *v1.begin() << " back: " << v1.back() << endl;

        for (vector<int>::size_type i = 0; i < v1.size(); ++i)
            cout << v1[i] << " ";
        cout << endl;

        vector<int> v2(5); //0으로 초기화된 size가 5인 컨테이너
        v2[0] = 10; // 0에서 10로 수정
        v2[1] = 20; // 0에서 20로 수정
        v2[2] = 30; // 0에서 30로 수정
        v2[3] = 40; // 0에서 40로 수정
        v2[4] = 50; // 0에서 50로 수정

        for (vector<int>::size_type i = 0; i < v2.size(); ++i)
            cout << v2[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-6
#pragma region S6_7
namespace S6_7
{
    int main(void)
    {
        vector<int> v1(5); //기본값 0으로 초기화된 size가 5인 컨테이너
        for (vector<int>::size_type i = 0; i < v1.size(); ++i)
            cout << v1[i] << " ";
        cout << endl;

        vector<int> v2(5, 3); //지정값 0으로 초기화된 size가 5인 컨테이너    
        for (vector<int>::size_type i = 0; i < v2.size(); ++i)
            cout << v2[i] << " ";
        cout << endl;

        vector<int> v3(5, 10); //지정값 10으로 초기화된 size가 5인 컨테이너    
        for (vector<int>::size_type i = 0; i < v3.size(); ++i)
            cout << v3[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-7
#pragma region S6_8
namespace S6_8
{
    int main(void)
    {
        vector<int> v(5); //기본값 0으로 초기화된 size가 5인 컨테이너

        v[0] = 10;
        v[1] = 20;
        v[2] = 30;
        v[3] = 40;
        v[4] = 50;
        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;

        v.resize(10); //기본값 0으로 초기화된 size가 10인 컨테이너로 확장
        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;

        v.resize(5); //size가 5인 컨테이너로 축소 capacity는 변화 없음.
        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-8
#pragma region S6_9
namespace S6_9
{
    int main(void)
    {
        vector<int> v(5);

        v[0] = 10;
        v[1] = 20;
        v[2] = 30;
        v[3] = 40;
        v[4] = 50;
        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;

        v.clear(); // v를 비운다.
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;

        if (v.empty()) // v가 비었는가?
        {
            cout << "v에 원소가 없습니다." << endl;
        }

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-9
#pragma region S6_10
namespace S6_10
{
    int main(void)
    {
        vector<int> v(5);

        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;

        vector<int>().swap(v);// 기본 생성자로 만든 vector컨테이너와 v 컨테어너를 swap한다.
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-10
#pragma region S6_11
namespace S6_11
{
    int main(void)
    {
        vector<int> v1;
        v1.push_back(10);
        v1.push_back(20);
        v1.push_back(30);

        vector<int> v2;
        v2.push_back(100);
        v2.push_back(200);
        v2.push_back(300);

        for (vector<int>::size_type i = 0; i < v1.size(); ++i)
            cout << v1[i] << ", " << v2[i] << endl;
        cout << endl;

        v1.swap(v2); // v1과 v2를 swap합니다.
        for (vector<int>::size_type i = 0; i < v1.size(); ++i)
            cout << v1[i] << ", " << v2[i] << endl;
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-11
#pragma region S6_12
namespace S6_12
{
    int main(void)
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;

        cout << v[0] << ", " << v.front() << endl; // 첫 번째 원소
        cout << v[4] << ", " << v.back() << endl; // 마지막 원소

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-12


int main(void)
{
    S6_9::main();
}

/*
#pragma region S6_
namespace S6_
{


    int main(void)
    {


        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-
*/