#include <iostream>
#include <string>

using namespace std;

#pragma region S12_1
namespace S12_1
{
    int main(void)
    {
        string t("Hello!"); // 임시 문자열
        const char* p1 = "Hello!";
        const char* p2 = p1 + 6;

        string s1;
        string s2("Hello!");
        string s3("Hello!", 2);
        string s4(5, 'H');
        string s5(t.begin(), t.end());  // 반복자 쌍
        string s6(p1, p2);      // 포인터 쌍

        // s:string객체, sz: '\0\문자열, c: 문자, n: 길이, iter: 반복자, p: 포인터
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

        // s: string 객체, sz: '\0' 문자열, c: 문자, off: 시작 위치, n: 길이, iter: 반복자, p: 포인터
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

        // s: string 객체, sz: '\0' 문자열, c: 문자, off: 시작 위치, n: 길이, iter: 반복자, p: 포인터
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


int main(void)
{
    S12_3::main();
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