#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#pragma region S8_1
namespace S8_1
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(30);
        v.push_back(40);
        v.push_back(40);
        v.push_back(50);

        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;

        vector<int>::iterator iter;
        //구간 [v.begin(), v.end())에서 현재 원소와 다음 원소가 같아지는 첫 번째 반복자를 반환
        iter = adjacent_find(v.begin(), v.end());

        if (iter != v.end()) //같은 원소가 없다면 구간의 끝 반복자 반환
            cout << *iter << endl;

        for (; iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 8-1
#pragma region S8_2
namespace S8_2
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

        vector<int>::iterator iter;
        vector<int>::iterator iter_b = v.begin();
        vector<int>::iterator iter_e = v.begin() + 2;
        //구간 [iter_b, iter_e)의 순차열은 10, 20이므로 
        //찾는 원소가 없어 iter는 구간의 끝인 iter_e입니다.
        iter = adjacent_find(iter_b, iter_e);

        if (iter != iter_e) //찾은 원소가 없는지 확인 <<맞는 표현>> 
            cout << *iter << endl;

        cout << "==============" << endl;
        if (iter != v.end()) //찾은 원소가 없는지 확인 <<틀린 표현>> 
            cout << *iter << endl;

        iter_b = v.begin();
        iter_e = v.end();
        iter = adjacent_find(iter_b, iter_e);

        //모두 맞는 확인
        if (iter != iter_e)
            cout << *iter << endl;
        if (iter != v.end())
            cout << *iter << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 8-2
#pragma region S8_3
namespace S8_3
{
    //이항 조건자
    bool Pred(int a, int b)
    {
        return abs(b - a) > 10;
    }

    int main(void)
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(50);
        v.push_back(90);

        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;

        vector<int>::iterator iter;
        iter = adjacent_find(v.begin(), v.end(), Pred);

        if (iter != v.end())
            cout << *iter << endl;

        for (; iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 8-3
#pragma region S8_4
namespace S8_4
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(30);
        v.push_back(50);

        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;

        // 구간 [v.begin(), v.end())에서 30 원소의 개수를 반환
        int n = (int)count(v.begin(), v.end(), 30);
        cout << "30의 개수: " << n << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 8-4


int main(void)
{
    S8_1::main();
}

/*
#pragma region S8_
namespace S8_
{
    int main(void)
    {


        system("pause");
        return 0;
    }
}
#pragma endregion Sample 8-
*/