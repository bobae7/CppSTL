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
        //���� [v.begin(), v.end())���� ���� ���ҿ� ���� ���Ұ� �������� ù ��° �ݺ��ڸ� ��ȯ
        iter = adjacent_find(v.begin(), v.end());

        if (iter != v.end()) //���� ���Ұ� ���ٸ� ������ �� �ݺ��� ��ȯ
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
        //���� [iter_b, iter_e)�� �������� 10, 20�̹Ƿ� 
        //ã�� ���Ұ� ���� iter�� ������ ���� iter_e�Դϴ�.
        iter = adjacent_find(iter_b, iter_e);

        if (iter != iter_e) //ã�� ���Ұ� ������ Ȯ�� <<�´� ǥ��>> 
            cout << *iter << endl;

        cout << "==============" << endl;
        if (iter != v.end()) //ã�� ���Ұ� ������ Ȯ�� <<Ʋ�� ǥ��>> 
            cout << *iter << endl;

        iter_b = v.begin();
        iter_e = v.end();
        iter = adjacent_find(iter_b, iter_e);

        //��� �´� Ȯ��
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
    //���� ������
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

        // ���� [v.begin(), v.end())���� 30 ������ ������ ��ȯ
        int n = (int)count(v.begin(), v.end(), 30);
        cout << "30�� ����: " << n << endl;

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