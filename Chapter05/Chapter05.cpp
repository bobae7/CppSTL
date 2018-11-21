#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <stack>
#include <functional>
#include <set>

using namespace std;

#pragma region S5_1
namespace S5_1
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        for (unsigned int i = 0; i < v.size(); i++)
            cout << v[i] << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-1
#pragma region S5_2
namespace S5_2
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        vector<int>::iterator iter;
        for (iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-2
#pragma region S5_3
namespace S5_3
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        vector<int>::iterator iter=v.begin();
        cout << iter[0] << endl;
        cout << iter[1] << endl;
        cout << iter[2] << endl;
        cout << iter[3] << endl;
        cout << iter[4] << endl;
        cout << endl;

        iter += 2;
        cout << *iter << endl;
        cout << endl;

        vector<int>::iterator iter2 = iter + 2;
        cout << *iter2 << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-3
#pragma region S5_4
namespace S5_4
{
    int main(void)
    {
        deque<int> dq;

        dq.push_back(10);
        dq.push_back(20);
        dq.push_back(30);
        dq.push_back(40);
        dq.push_back(50);

        deque<int>::iterator iter = dq.begin();
        cout << iter[0] << endl;
        cout << iter[1] << endl;
        cout << iter[2] << endl;
        cout << iter[3] << endl;
        cout << iter[4] << endl;
        cout << endl;

        iter += 2;
        cout << *iter << endl;
        cout << endl;

        deque<int>::iterator iter2 = iter + 2;
        cout << *iter2 << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-4
#pragma region S5_5
namespace S5_5
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        vector<int>::iterator iter;
        iter = find(v.begin(), v.end(), 20);
        cout << *iter << endl;

        iter = find(v.begin(), v.end(), 100);
        if (iter == v.end())
            cout << "100이 없음!" << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-5
#pragma region S5_6
namespace S5_6
{
    int main(void)
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        list<int> lt;
        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);
        lt.push_back(40);
        lt.push_back(50);

        sort(v.begin(), v.end());
        //sort(lt.begin(), lt.end());

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-6
#pragma region S5_7
namespace S5_7
{
    int main(void)
    {
        vector<int> v;
        v.push_back(50);
        v.push_back(10);
        v.push_back(20);
        v.push_back(40);
        v.push_back(30);

        sort(v.begin(), v.end(), less<int>());
        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        sort(v.begin(), v.end(), greater<int>());
        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-7
#pragma region S5_8
namespace S5_8
{
    int main(void)
    {
        stack<int> st;                  // stack 컨테이너 생성

        st.push(10);                    // 데이터 추가(입력)
        st.push(20);
        st.push(30);

        cout << st.top() << endl;       // top 데이터 출력
        st.pop();                       // top 데이터 삭제
        cout << st.top() << endl;
        st.pop();
        cout << st.top() << endl;
        st.pop();

        if (st.empty())
            cout << "stack에 데이터 없음" << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-8
#pragma region S5_9
namespace S5_9
{
    int main(void)
    {
        stack<int, vector<int>> st;

        st.push(10);                    // 데이터 추가(입력)
        st.push(20);
        st.push(30);

        cout << st.top() << endl;       // top 데이터 출력
        st.pop();                       // top 데이터 삭제
        cout << st.top() << endl;
        st.pop();
        cout << st.top() << endl;
        st.pop();

        if (st.empty())
            cout << "stack에 데이터 없음" << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-9
#pragma region S5_10
namespace S5_10
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        // 일반 반복자 iterator를 역방향 반복자 reverse_iterator로 변환
        reverse_iterator<vector<int>::iterator> riter(v.end());
        reverse_iterator<vector<int>::iterator> end_riter(v.begin());

        for (; riter != end_riter; ++riter)
            cout << *riter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-10
#pragma region S5_11
namespace S5_11
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        // STL 모든 컨테이너는 반복자 어댑터 reverse_iterator를 typedef 타입으로 정의하며
        // rbegin(), rend()로 컨테이너의 역방향 반복자를 반환
        vector<int>::reverse_iterator riter(v.rbegin());
        for (; riter != v.rend(); ++riter)
            cout << *riter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-11
#pragma region S5_12
namespace S5_12
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        vector<int>::iterator normal_iter = v.begin() + 3;          // 40 원소를 가리키는 정방향 반복자
        vector<int>::reverse_iterator reverse_iter(normal_iter);    // normal_iter의 역방향 반복자

        cout << "정방향 반복자의 값: " << *normal_iter << endl;
        cout << "역방향 반복자의 값: " << *reverse_iter << endl;
        cout << endl;

        for (vector<int>::iterator iter = v.begin(); iter != normal_iter; ++iter)
            cout << *iter << " ";       // 정방향 출력
        cout << endl;

        for (vector<int>::reverse_iterator riter = reverse_iter; riter != v.rend(); ++riter)
            cout << *riter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-12
#pragma region S5_13
namespace S5_13
{
    int main(void)
    {
        cout << less<int>()(10, 20) << endl;            // 임시 less 객체로 비교
        cout << less<int>()(20, 20) << endl;
        cout << less<int>()(20, 10) << endl;
        cout << "==============" << endl;
        cout << not2(less<int>())(10, 20) << endl;      // 임시 less 객체에 not2 어댑터 적용
        cout << not2(less<int>())(20, 20) << endl;
        cout << not2(less<int>())(20, 10) << endl;
        cout << endl;

        less<int> l;
        cout << l(10, 20) << endl;      // less 객체 l로 비교
        cout << l(20, 20) << endl;
        cout << l(20, 10) << endl;
        cout << "==============" << endl;
        cout << not2(l)(10, 20) << endl;
        cout << not2(l)(20, 20) << endl;
        cout << not2(l)(20, 10) << endl;
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-13
#pragma region S5_14
namespace S5_14
{
    int main(void)
    {
        // vector<typename T, typename Alloc = allocator<T>>, vector<int>와 같음
        vector<int, allocator<int>> v;
        v.push_back(10);
        cout << *v.begin() << endl;

        // set<typename T, typename Pred = less<T>, typename Alooc = allocator<T>>, set<int>와 같음
        set<int, less<int>, allocator<int>> s;
        s.insert(10);
        cout << *s.begin() << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-14

int main(void)
{
    S5_14::main();
}

/*
#pragma region S5_
namespace S5_
{


    int main(void)
    {


        system("pause");
        return 0;
    }
}
#pragma endregion Sample 5-
*/