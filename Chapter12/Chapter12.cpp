#include <iostream>
#include <string>

using namespace std;

#pragma region S12_1
namespace S12_1
{
    int main(void)
    {
        string t("Hello!"); // �ӽ� ���ڿ�
        const char* p1 = "Hello!";
        const char* p2 = p1 + 6;

        string s1;
        string s2("Hello!");
        string s3("Hello!", 2);
        string s4(5, 'H');
        string s5(t.begin(), t.end());  // �ݺ��� ��
        string s6(p1, p2);      // ������ ��

        // s:string��ü, sz: '\0\���ڿ�, c: ����, n: ����, iter: �ݺ���, p: ������
        cout << "s1(): " << s1 << endl;
        cout << "s2(sz): " << s2 << endl;
        cout << "s3(sz, n): " << s3 << endl;
        cout << "s4(n, c): " << s4 << endl;
        cout << "s5(iter1, iter2): " << s5 << endl;
        cout << "s6(p1, p2): " << s6 << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 12-1
#pragma region S12_2
namespace S12_2
{
    int main(void)
    {
        string s1("He");
        string s2("He");
        string s3("He");
        string s4("He");
        string s5("He");
        string s6("He");
        string s7("He");
        string s8("He");
        string s9("He");
        string s10("He");

        string t("llo!");
        const char* p1 = "llo!";
        const char* p2 = p1 + 4;

        s1.append(t);
        s2.append(t, 0, 4);
        s3.append("llo!");
        s4.append("llo!", 4);
        s5.append(t.begin(), t.end());
        s6.append(p1, p2);
        s7.append(5, 'H');
        s8 += t;
        s9 += "llo!";

        for (string::iterator iter = t.begin(); iter != t.end(); ++iter)
            s10.push_back(*iter);

        // s: string ��ü, sz: '\0' ���ڿ�, c: ����, off: ���� ��ġ, n: ����, iter: �ݺ���, p: ������
        cout << "s1.append(s): " << s1 << endl;
        cout << "s2.append(s, off, n): " << s2 << endl;
        cout << "s3.append(sz): " << s3 << endl;
        cout << "s4.append(sz, n): " << s4 << endl;
        cout << "s5.append(iter1, iter2): " << s5 << endl;
        cout << "s6.append(p1, p2): " << s6 << endl;
        cout << "s7.append(n, c): " << s7 << endl;
        cout << "s8 += s: " << s8 << endl;
        cout << "s9 += sz: " << s9 << endl;
        cout << "s10.push_back(c): " << s10 << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 12-2
#pragma region S12_3
namespace S12_3
{
    int main(void)
    {
        string t("Hello!");
        const char* p1 = "Hello!";
        const char* p2 = p1 + 6;

        string s1, s2, s3, s4, s5, s6, s7, s8, s9;

        s1.assign(t);
        s2.assign(t, 0, 6);
        s3.assign("Hello!");
        s4.assign("Hello!", 6);
        s5.append(6, 'H');
        s6.append(t.begin(), t.end());
        s7.append(p1, p1);
        s8 = t;
        s9 = "Hello!";

        // s: string ��ü, sz: '\0' ���ڿ�, c: ����, off: ���� ��ġ, n: ����, iter: �ݺ���, p: ������
        cout << "s1.assign(s): " << s1 << endl;
        cout << "s2.assign(s, off, n): " << s2 << endl;
        cout << "s3.assign(sz): " << s3 << endl;
        cout << "s4.assign(sz, n): " << s4 << endl;
        cout << "s5.assign(n, c): " << s5 << endl;
        cout << "s6.assign(iter1, iter2): " << s6 << endl;
        cout << "s7.assign(p1, p2): " << s7 << endl;
        cout << "s8 = s: " << s8 << endl;
        cout << "s9 = sz: " << s9 << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 12-3
#pragma region S12_4
namespace S12_4
{
    int main(void)
    {
        string s("Hello!");
        const char *sz;
        const char *buf;

        sz = s.c_str();
        buf = s.data();

        cout << "'\\0'���ڷ� ������ ���ڿ�(C-Style): " << sz << endl;
        cout << "'\\0'���� �������� �ʴ� ���ڿ� �迭: " << buf << endl;
        for (int i = 0; i < 6; ++i)
            cout << buf[i];
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 12-4
#pragma region S12_5
namespace S12_5
{
    int main(void)
    {
        string s1("ABCDE");
        string s2("AKABC");
        const char* sz = "AKABC";

        // s: string ��ü, sz: '\0' ���ڿ�, off: ������ġ, n: ����
        cout << "s1.compare(s): " << s1.compare(s2) << endl;
        cout << "s1.compare(off, n, s): " << s1.compare(2, 3, s2) << endl;
        cout << "s1.compare(off, n, s, off2, n2): " << s1.compare(0, 3, s2, 2, 3) << endl;
        cout << "s1.compare(sz): " << s1.compare(sz) << endl;
        cout << "s1.compare(off, n, sz): " << s1.compare(2, 3, sz) << endl;
        cout << "s1.compare(off, n, sz, n2): " << s1.compare(0, 1, sz, 1) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 12-5
#pragma region S12_6
namespace S12_6
{
    int main(void)
    {
        string s("Hello!");
        char buf[100];

        // ������: copy()�� ���� '\0' ���ڸ� �������� �ʴ´�.
        s.copy(buf, s.length());    // length()�� size()�� ����.
        buf[s.length()] = '\0';
        cout << "��ü ���ڿ�[copy(buf, n)]: " << buf << endl;
        s.copy(buf, 4, 2);
        buf[4] = '\0';
        cout << "�κ� ���ڿ�[copy(buf, n, off)]: " << buf << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 12-6
#pragma region S12_7
namespace S12_7
{
    int main(void)
    {
        const char *sz = "\"Be careful in Uncle Randy's new car\", "
            "my sister told them. \"Wipe your feet before you get in it. "
            "Don't mess anything up. Don't get it dirty.\" "
            "I listened to her, and thought, "
            "as only a bachelor uncle can So I made things easy. "
            "while my sister was outlining the rules, "
            "I slowly and deliberately opened a can of soda, turned it over, "
            "and poured it on the cloth seats in the back of the convertible.";
        string t("Randy");
        string s = sz;

        //s:string��ü, sz:'\0'���ڿ�, c:����, off:������ġ, n:����
        cout << s << endl << endl;
        cout << "s.find(c): " << s.find('I') << endl;
        cout << "s.find(c,off): " << s.find('I', 250) << endl;
        cout << "s.find(sz): " << s.find("poured it") << endl;
        cout << "s.find(sz,off): " << s.find("poured it", 0) << endl;
        cout << "s.find(sz,off,n): " << s.find("I listened to her", 0, 1) << endl;
        cout << "s.find(c): " << s.find(t, 0) << endl << endl;

        string::size_type pos = s.find("Not found");
        cout << (int)pos << " : " << (int)string::npos << endl;

        pos = s.rfind('I');
        if (string::npos != pos)
            cout << "s.rfind(c): " << pos << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 12-7
#pragma region S12_8
namespace S12_8
{
    int main(void)
    {
        string t("ABC");

        string s1("Hello!");
        string s2("Hello!");
        string s3("Hello!");
        string s4("Hello!");
        string s5("Hello!");
        string s6("Hello!");
        string s7("Hello!");
        string s8("Hello!");
        string s9("Hello!");

        s1.insert(1, "ABC");
        s2.insert(1, "ABC", 2);
        s3.insert(1, t);
        s4.insert(1, t, 0, 2);
        s5.insert(1, 3, 'A');

        s6.insert(s6.begin() + 1, ' ');
        s7.insert(s7.begin() + 1, 'A');
        s8.insert(s8.begin() + 1, 3, 'A');
        s9.insert(s9.begin() + 1, t.begin(), t.end());

        //s:string��ü,sz:'\0'���ڿ�,c:����,pos:������ġ,positer:���Թݺ���,off:��ġ,n:����
        cout << "s1.insert(pos, sz): " << s1 << endl;
        cout << "s2.insert(pos, sz, n): " << s2 << endl;
        cout << "s3.insert(pos, s): " << s3 << endl;
        cout << "s4.insert(pos, s, off, n): " << s4 << endl;
        cout << "s5.insert(pos, n, c): " << s5 << endl;

        cout << "s6.insert(positer): " << s6 << endl;
        cout << "s7.insert(positer, c): " << s7 << endl;
        cout << "s8.insert(positer, n, c): " << s8 << endl;
        cout << "s9.insert(positer, iter1, iter2): " << s9 << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 12-8


int main(void)
{
    S12_8::main();
}

/*
#pragma region S12_
namespace S12_
{


    int main(void)
    {


        system("pause");
        return 0;
    }
}
#pragma endregion Sample 12-
*/