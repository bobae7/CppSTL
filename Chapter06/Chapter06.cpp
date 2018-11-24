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
        vector<int> v1(5, 7); //0���� �ʱ�ȭ�� size�� 5�� �����̳�
        v1.push_back(10); //10 �߰�
        v1.push_back(20); //20 �߰�
        v1.push_back(30); //30 �߰�
        v1.push_back(40); //40 �߰�
        v1.push_back(50); //50 �߰�

        cout << "capacity: " << v1.capacity() << endl;
        cout << "size: " << v1.size() << endl;
        cout << "begin: " << *v1.begin() << " back: " << v1.back() << endl;

        for (vector<int>::size_type i = 0; i < v1.size(); ++i)
            cout << v1[i] << " ";
        cout << endl;

        vector<int> v2(5); //0���� �ʱ�ȭ�� size�� 5�� �����̳�
        v2[0] = 10; // 0���� 10�� ����
        v2[1] = 20; // 0���� 20�� ����
        v2[2] = 30; // 0���� 30�� ����
        v2[3] = 40; // 0���� 40�� ����
        v2[4] = 50; // 0���� 50�� ����

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
        vector<int> v1(5); //�⺻�� 0���� �ʱ�ȭ�� size�� 5�� �����̳�
        for (vector<int>::size_type i = 0; i < v1.size(); ++i)
            cout << v1[i] << " ";
        cout << endl;

        vector<int> v2(5, 3); //������ 0���� �ʱ�ȭ�� size�� 5�� �����̳�    
        for (vector<int>::size_type i = 0; i < v2.size(); ++i)
            cout << v2[i] << " ";
        cout << endl;

        vector<int> v3(5, 10); //������ 10���� �ʱ�ȭ�� size�� 5�� �����̳�    
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
        vector<int> v(5); //�⺻�� 0���� �ʱ�ȭ�� size�� 5�� �����̳�

        v[0] = 10;
        v[1] = 20;
        v[2] = 30;
        v[3] = 40;
        v[4] = 50;
        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;

        v.resize(10); //�⺻�� 0���� �ʱ�ȭ�� size�� 10�� �����̳ʷ� Ȯ��
        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;

        v.resize(5); //size�� 5�� �����̳ʷ� ��� capacity�� ��ȭ ����.
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

        v.clear(); // v�� ����.
        cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;

        if (v.empty()) // v�� ����°�?
        {
            cout << "v�� ���Ұ� �����ϴ�." << endl;
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

        vector<int>().swap(v);// �⺻ �����ڷ� ���� vector�����̳ʿ� v ���׾�ʸ� swap�Ѵ�.
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

        v1.swap(v2); // v1�� v2�� swap�մϴ�.
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

        cout << v[0] << ", " << v.front() << endl; // ù ��° ����
        cout << v[4] << ", " << v.back() << endl; // ������ ����

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