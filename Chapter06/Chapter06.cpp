#include <iostream>
#include <vector>
#include <deque>
#include <list>

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
#pragma region S6_13
namespace S6_13
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

        v.front() = 100; // ù ��° ���Ҹ� 100����
        v.back() = 500; // ������ ���Ҹ� 500����
        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-13
#pragma region S6_14
namespace S6_14
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

        v[0] = 100; //���� ���� ���� 0 index ������ ����
        v[4] = 500; //���� ���� ���� 4 index ������ ����
        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;

        v.at(0) = 1000; //���� ���� �ִ� 0 index ������ ����
        v.at(4) = 5000; //���� ���� �ִ� 4 index ������ ����
        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v.at(i) << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-14
#pragma region S6_15
namespace S6_15
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        try
        {
            cout << v.at(0) << endl;
            cout << v.at(3) << endl;
            cout << v.at(6) << endl; //throw out_of_range ����
        }
        catch (out_of_range &e)
        {
            cout << e.what() << endl;
        }

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-15
#pragma region S6_16
namespace S6_16
{
    int main(void)
    {
        vector<int> v(5, 1); // �ʱⰪ 1�� 5���� ���Ҹ� ���� �����̳� ����

        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;

        v.assign(5, 2); // 5���� ���Ұ��� 2�� �Ҵ�
        cout << "size: " << v.size() << ", capacity: " << v.capacity() << endl;
        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-16
#pragma region S6_17
namespace S6_17
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

        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-17
#pragma region S6_18
namespace S6_18
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        vector<int>::iterator iter = v.begin(); // ���� ����(10)�� ����Ų��.
        cout << *iter << endl;

        iter += 2; // +2�� ��ġ�� ����(30)�� ����Ų��.
        cout << *iter << endl;

        iter -= 1; // -1�� ��ġ�� ����(20)�� ����Ų��.
        cout << *iter << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-18
#pragma region S6_19
namespace S6_19
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        vector<int>::iterator iter = v.begin();
        vector<int>::const_iterator citer = v.begin();

        cout << *iter << endl; //����Ű�� ������ ����
        cout << *citer << endl; //����Ű�� ������ ��� ����

        cout << *++iter << endl; //���� ���ҷ� �̵��� ������ ����
        cout << *++citer << endl; //���� ���ҷ� �̵��� ������ ��� ����

        *iter = 100;  // �Ϲ� �ݺ��ڴ� ����Ű�� ���Ҹ� ������ �� ����.
        //*citer = 100; // ��� �ݺ��ڴ� ����Ű�� ���Ҹ� ������ �� ����.

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-19
#pragma region S6_20
namespace S6_20
{
    int main(void)
    {
        vector<int> v;
        int arr[5] = { 10,20,30,40,50 };

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        vector<int>::iterator iter = v.begin();
        int* p = arr;
        cout << *iter << ", " << *p << endl; // iter�� pó�� ������.

        for (; iter != v.end(); ++iter)
            cout << *iter << endl;
        for (int i = 0; i < sizeof(arr)/sizeof(*arr) && p != nullptr; ++i, ++p)
            cout << *p << endl;

        vector<int>::const_iterator citer = v.begin();
        const int* cp = arr;
        cout << *citer << ", " << *cp << endl; // citer�� cpó�� ������.

        for (; citer != v.end(); ++citer)
            cout << *citer << endl;
        for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i, ++p)
            cout << *cp << endl;

        const vector<int>::iterator iter_const = v.begin();
        int* const p_const = arr;
        cout << *iter_const << ", " << *p_const << endl; //iter_const�� p_constó�� ������.

        //cout << *(++iter_const) << endl;
        //cout << *(++p_const) << endl;

        const vector<int>::const_iterator citer_const = v.begin();
        const int* const cp_const = arr;
        cout << *citer_const << ", " << *cp_const << endl; //citer_const�� cp_constó�� ������.

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-20
#pragma region S6_21
namespace S6_21
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        vector<int>::iterator iter; //������ �ݺ���
        vector<int>::reverse_iterator riter; //������ �ݺ���

        for (iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        for (riter = v.rbegin(); riter != v.rend(); ++riter)
            cout << *riter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-21
#pragma region S6_22
namespace S6_22
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        vector<int>::iterator iter = v.begin() + 2;
        vector<int>::iterator iter2;

        // iter�� ����Ű�� ��ġ�� ���� 100�� ����.
        // iter2�� ������ ������ ����Ű�� �ݺ���.
        cout << "iter: " << *iter << endl;
        iter2 = v.insert(iter, 100);
        cout << "iter2: " << *iter2 << endl;

        for (iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-22
#pragma region S6_23
namespace S6_23
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        vector<int>::iterator iter = v.begin() + 2;

        // iter�� ����Ű�� ��ġ�� ���� 100�� 3�� ����.   
        v.insert(iter, 3, 100);

        for (iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        /////////////////////////////////////////////////////
        vector<int> v2;
        v2.push_back(100);
        v2.push_back(200);
        v2.push_back(300);

        iter = v2.begin() + 1;
        // iter�� ����Ű�� ��ġ�� [v.begin(), v.end()) ������ ���Ҹ� ����.   
        v2.insert(iter, v.begin(), v.end());

        for (iter = v2.begin(); iter != v2.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-23
#pragma region S6_24
namespace S6_24
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
        vector<int>::iterator iter2;
        for (iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        iter = v.begin() + 2;
        // iter�� ����Ű�� ��ġ�� ���Ҹ� �����մϴ�. iter2�� ���� ���� 40
        iter2 = v.erase(iter);

        for (iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        // [v.begin()+1, v.end()) ������ ���Ҹ� �����մϴ�.   
        iter2 = v.erase(v.begin() + 1, v.end()); // iter2�� ���� ���� v.end()

        for (iter = v.begin(); iter != v.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-24
#pragma region S6_25
namespace S6_25
{
    int main(void)
    {
        vector<int> v;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        vector<int> v2(v.begin(), v.end()); // ������ [v.begin(), v.end())�� v2�� �ʱ�ȭ.

        vector<int>::iterator iter;
        for (iter = v2.begin(); iter != v2.end(); ++iter)
            cout << *iter << " "; // v2 ���
        cout << endl;

        vector<int> v3;
        v3.assign(v.begin(), v.end());  // v3�� ������ [v.begin(), v.end())�� �Ҵ�.
        for (iter = v3.begin(); iter != v3.end(); ++iter)
            cout << *iter << " "; // v3 ���
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-25
#pragma region S6_26
namespace S6_26
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
        v2.push_back(10);
        v2.push_back(20);
        v2.push_back(50);

        if (v1 == v2)
            cout << "v1 == v2" << endl;

        if (v1 != v2)
            cout << "v1 != v2" << endl;

        if (v1 < v2)
            cout << "v1 < v2" << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-26
#pragma region S6_27
namespace S6_27
{
    int main(void)
    {
        deque<int> dq;

        for (deque<int>::size_type i = 0; i < 10; ++i)
            dq.push_back((int)((i + 1) * 10));

        for (deque<int>::size_type i = 0; i < dq.size(); ++i)
            cout << dq[i] << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-27
#pragma region S6_28
namespace S6_28
{
    int main(void)
    {
        vector<int> v(4, 100); //100���� �ʱ�ȭ�� 4���� ���Ҹ� ���� �����̳� v
        deque<int> dq(4, 100); //100���� �ʱ�ȭ�� 4���� ���Ҹ� ���� �����̳� dq

        v.push_back(200); // v�� 200 �߰�
        dq.push_back(200); // dq�� 200 �߰�

        for (vector<int>::size_type i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;
        for (deque<int>::size_type i = 0; i < dq.size(); ++i)
            cout << dq[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-28
#pragma region S6_29
namespace S6_29
{
    int main(void)
    {
        deque<int> dq;

        dq.push_back(10);
        dq.push_back(20);
        dq.push_back(30);
        dq.push_back(40);
        dq.push_back(50);

        for (deque<int>::size_type i = 0; i < dq.size(); ++i)
            cout << dq[i] << " ";
        cout << endl;

        dq.push_front(100); // ���ʿ� �߰��մϴ�.
        dq.push_front(200);
        for (deque<int>::size_type i = 0; i < dq.size(); ++i)
            cout << dq[i] << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-29
#pragma region S6_30
namespace S6_30
{
    int main(void)
    {
        deque<int> dq;

        dq.push_back(10);
        dq.push_back(20);
        dq.push_back(30);
        dq.push_back(40);
        dq.push_back(50);

        deque<int>::iterator iter;
        for (iter = dq.begin(); iter != dq.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        iter = dq.begin() + 2; //�ݺ��ڿ� +2�մϴ�.
        cout << *iter << endl;

        iter += 2; //�ݺ��ڿ� +2�մϴ�.
        cout << *iter << endl;

        iter -= 3; //�ݺ��ڿ� -3�մϴ�.
        cout << *iter << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-30
#pragma region S6_31
namespace S6_31
{
    int main(void)
    {
        deque<int> dq;

        for (int i = 0; i < 10; i++)
            dq.push_back((i + 1) * 10);

        deque<int>::iterator iter;
        deque<int>::iterator iter2;
        for (iter = dq.begin(); iter != dq.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;


        iter = dq.begin() + 2;
        iter2 = dq.insert(iter, 500);
        cout << *iter2 << endl;

        for (iter = dq.begin(); iter != dq.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-31
#pragma region S6_32
namespace S6_32
{
    int main(void)
    {
        list<int> lt;

        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);
        lt.push_back(40);
        lt.push_back(50);

        list<int>::iterator iter;
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        lt.push_front(100);
        lt.push_front(200);

        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-32
#pragma region S6_33
namespace S6_33
{
    int main(void)
    {
        list<int> lt;

        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);
        lt.push_back(40);
        lt.push_back(50);

        list<int>::iterator iter = lt.begin();
        list<int>::iterator iter2;
        ++iter;
        ++iter;

        iter2 = lt.erase(iter); //iter(30)�� ���Ҹ� �����մϴ�.

        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        cout << "iter2 : " << *iter2 << endl;

        iter = iter2;
        iter2 = lt.insert(iter, 300); //iter2(40)�� ����Ű�� ��ġ�� 300�� �����մϴ�.
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        cout << "iter2 : " << *iter2 << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-33
#pragma region S6_34
namespace S6_34
{
    int main(void)
    {
        vector<int> v;
        list<int> lt;

        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);
        lt.push_back(40);
        lt.push_back(50);

        vector<int>::iterator viter = v.begin();
        ++viter; // 20���Ҹ� ����Ŵ
        list<int>::iterator liter = lt.begin();
        ++liter; // 20���Ҹ� ����Ŵ

        viter = v.insert(viter, 600); // v�� �� ��° ��ҷ� ����
        liter = lt.insert(liter, 600); // lt�� �� ��° ��ҷ� ����

        cout << "vector: " << *viter << endl;
        cout << "list: " << *liter << endl;

        cout << "vector : ";
        for (viter = v.begin(); viter != v.end(); ++viter)
            cout << *viter << ' ';
        cout << endl;

        cout << "list : ";
        for (liter = lt.begin(); liter != lt.end(); ++liter)
            cout << *liter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-34
#pragma region S6_35
namespace S6_35
{
    int main(void)
    {
        list<int> lt;

        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);
        lt.push_back(10);
        lt.push_back(40);
        lt.push_back(50);
        lt.push_back(10);
        lt.push_back(10);

        list<int>::iterator iter;
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        lt.remove(10); // 10 ������ ��带 ��� ����
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-35
#pragma region S6_36
namespace S6_36
{
    bool Predicate(int n) // ���� ������
    {
        return 10 <= n && n <= 30;
    }

    int main(void)
    {
        list<int> lt;

        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);
        lt.push_back(40);
        lt.push_back(50);
        lt.push_back(10);

        list<int>::iterator iter;
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        lt.remove_if(Predicate); // �����ڰ� ���� ��� ���Ҹ� �����մϴ�.
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-36
#pragma region S6_37
namespace S6_37
{
    int main(void)
    {
        list<int> lt1;
        list<int> lt2;

        lt1.push_back(10);
        lt1.push_back(20);
        lt1.push_back(30);
        lt1.push_back(40);
        lt1.push_back(50);

        lt2.push_back(100);
        lt2.push_back(200);
        lt2.push_back(300);
        lt2.push_back(400);
        lt2.push_back(500);

        list<int>::iterator iter;
        cout << "lt1: ";
        for (iter = lt1.begin(); iter != lt1.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        cout << "lt2: ";
        for (iter = lt2.begin(); iter != lt2.end(); ++iter)
            cout << *iter << ' ';
        cout << endl << "=============" << endl;

        iter = lt1.begin();
        ++iter;
        ++iter; // 30 ������ ��ġ�� ����Ŵ

        lt1.splice(iter, lt2); //iter�� ����Ű�� ��ġ�� lt2�� ��� ���Ҹ� �߶� ����

        cout << "lt1: ";
        for (iter = lt1.begin(); iter != lt1.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        cout << "lt2: ";
        for (iter = lt2.begin(); iter != lt2.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-37
#pragma region S6_38
namespace S6_38
{
    int main(void)
    {
        list<int> lt1;
        list<int> lt2;

        lt1.push_back(10);
        lt1.push_back(20);
        lt1.push_back(30);
        lt1.push_back(40);
        lt1.push_back(50);

        lt2.push_back(100);
        lt2.push_back(200);
        lt2.push_back(300);
        lt2.push_back(400);
        lt2.push_back(500);

        list<int>::iterator iter1;
        list<int>::iterator iter2;
        cout << "lt1: ";
        for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
            cout << *iter1 << ' ';
        cout << endl;

        cout << "lt2: ";
        for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
            cout << *iter2 << ' ';
        cout << endl << "=============" << endl;

        iter1 = lt1.begin();
        ++iter1;
        ++iter1; // 30 ������ ��ġ�� ����Ŵ

        iter2 = lt2.begin();
        ++iter2; // 200 ������ ��ġ�� ����Ŵ

        //iter1�� ����Ű�� ��ġ�� iter2�� ����Ű�� ��ġ�� lt2�� ���Ҹ� �߶� ����
        lt1.splice(iter1, lt2, iter2);

        cout << "lt1: ";
        for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
            cout << *iter1 << ' ';
        cout << endl;

        cout << "lt2: ";
        for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
            cout << *iter2 << ' ';
        cout << endl << "=============" << endl;

        //lt1.end()�� ����Ű�� ��ġ�� ������ [lt2.begin(), lt2.end())�� �߶� ����
        lt1.splice(lt1.end(), lt2, lt2.begin(), lt2.end());

        cout << "lt1: ";
        for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
            cout << *iter1 << ' ';
        cout << endl;

        cout << "lt2: ";
        for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
            cout << *iter2 << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-38
#pragma region S6_39
namespace S6_39
{
    int main(void)
    {
        list<int> lt;

        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);
        lt.push_back(40);
        lt.push_back(50);

        list<int>::iterator iter;
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        lt.reverse();
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-39
#pragma region S6_40
namespace S6_40
{
    int main(void)
    {
        list<int> lt;

        lt.push_back(10);
        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);
        lt.push_back(30);
        lt.push_back(30);
        lt.push_back(40);
        lt.push_back(50);
        lt.push_back(10);

        list<int>::iterator iter;
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        lt.unique();
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-40
#pragma region S6_41
namespace S6_41
{
    bool Predicate(int first, int second)
    {
        return second - first <= 0;
    }

    int main(void)
    {
        list<int> lt;

        lt.push_back(10);
        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);
        lt.push_back(30);
        lt.push_back(30);
        lt.push_back(40);
        lt.push_back(50);
        lt.push_back(10);

        list<int>::iterator iter;
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        lt.unique(Predicate);
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-41
#pragma region S6_42
namespace S6_42
{
    int main(void)
    {
        list<int> lt;

        lt.push_back(20);
        lt.push_back(10);
        lt.push_back(50);
        lt.push_back(30);
        lt.push_back(40);

        list<int>::iterator iter;
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        lt.sort(); // ��������( less, < ����) ����
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-42
#pragma region S6_43
namespace S6_43
{
    struct Greater
    {
        bool operator () (int left, int right) const
        {
            return left > right;
        }
    };

    int main(void)
    {
        list<int> lt;

        lt.push_back(20);
        lt.push_back(10);
        lt.push_back(50);
        lt.push_back(30);
        lt.push_back(40);

        list<int>::iterator iter;
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        lt.sort(greater<int>()); // ������ greater�� ����Ͽ� �������� ����
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        lt.sort(less<int>()); // ������ less�� ����Ͽ� �ٽ� �������� ����
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        lt.sort(Greater()); // ����� ���� �����ڸ� ����Ͽ� �������� ����
        for (iter = lt.begin(); iter != lt.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-43
#pragma region S6_44
namespace S6_44
{
    int main(void)
    {
        list<int> lt1;
        list<int> lt2;

        lt1.push_back(10);
        lt1.push_back(20);
        lt1.push_back(30);
        lt1.push_back(40);
        lt1.push_back(50);

        lt2.push_back(25);
        lt2.push_back(35);
        lt2.push_back(60);


        list<int>::iterator iter;
        cout << "lt1: ";
        for (iter = lt1.begin(); iter != lt1.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        cout << "lt2: ";
        for (iter = lt2.begin(); iter != lt2.end(); ++iter)
            cout << *iter << ' ';
        cout << endl << "===============" << endl;

        lt1.merge(lt2); // lt2�� lt1���� �պ� �����մϴ�. ���� ������ less

        cout << "lt1: ";
        for (iter = lt1.begin(); iter != lt1.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        cout << "lt2: ";
        for (iter = lt2.begin(); iter != lt2.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-44
#pragma region S6_45
namespace S6_45
{
    int main(void)
    {
        list<int> lt1;
        list<int> lt2;

        lt1.push_back(50);
        lt1.push_back(40);
        lt1.push_back(30);
        lt1.push_back(20);
        lt1.push_back(10);

        //lt2.push_back(25); //lt1�� lt2�� ���� ����� �ٸ��Ƿ� ����
        //lt2.push_back(35);
        //lt2.push_back(60);

        // lt1�� lt2�� ���� ����� ����.
        // greater ������( > ���� ) ���� ������ �����
        lt2.push_back(60);
        lt2.push_back(35);
        lt2.push_back(25);


        list<int>::iterator iter;
        cout << "lt1: ";
        for (iter = lt1.begin(); iter != lt1.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        cout << "lt2: ";
        for (iter = lt2.begin(); iter != lt2.end(); ++iter)
            cout << *iter << ' ';
        cout << endl << "===============" << endl;

        // lt2�� lt1���� �պ� �����մϴ�. 
        // �� list�� ���� ������ > ������ greater��� ���� predicate�� �����մϴ�.
        lt1.merge(lt2, greater<int>());

        cout << "lt1: ";
        for (iter = lt1.begin(); iter != lt1.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        cout << "lt2: ";
        for (iter = lt2.begin(); iter != lt2.end(); ++iter)
            cout << *iter << ' ';
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 6-45


int main(void)
{
    S6_42::main();
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