#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <deque>

using namespace std;

#pragma region S11_1
namespace S11_1
{
    int main(void)
    {
        stack<int> st;

        st.push(10);
        st.push(20);
        st.push(30);

        while (!st.empty())
        {
            cout << st.top() << endl;
            st.pop();
        }

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 11-1
#pragma region S11_2
namespace S11_2
{
    int main(void)
    {
        queue<int, list<int> > q; //리스트를 사용하는 queue 생성

        q.push(10);
        q.push(20);
        q.push(30);

        while (!q.empty())
        {
            cout << q.front() << endl;
            q.pop();
        }

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 11-2
#pragma region S11_3
namespace S11_3
{
    int main(void)
    {
        priority_queue<int> pq1; // 기본컨테이너 vector<int>, 기본정렬기준 less
        pq1.push(40);
        pq1.push(20);
        pq1.push(30);
        pq1.push(50);
        pq1.push(10);

        cout << "priority_queue[less]:" << endl;
        while (!pq1.empty())
        {
            cout << pq1.top() << endl;
            pq1.pop();
        }
        cout << "================" << endl;

        priority_queue<int, deque<int>, greater<int> > pq2;
        pq2.push(40);
        pq2.push(20);
        pq2.push(30);
        pq2.push(50);
        pq2.push(10);

        cout << "priority_queue[greater]:" << endl;
        while (!pq2.empty())
        {
            cout << pq2.top() << endl;
            pq2.pop();
        }

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 11-3


int main(void)
{
    S11_1::main();
}

/*
#pragma region S11_
namespace S11_
{


    int main(void)
    {


        system("pause");
        return 0;
    }
}
#pragma endregion Sample 11-
*/