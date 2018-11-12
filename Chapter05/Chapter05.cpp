#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>

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
            cout << "100ÀÌ ¾øÀ½!" << endl;

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

int main(void)
{
    S5_6::main();
    //E5_1::main();
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