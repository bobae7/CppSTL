#include <iostream>
#include <set>
#include <map>

using namespace std;

#pragma region S7_1
namespace S7_1
{
    void main(void)
    {
        set<int> s; // 정수 원소를 저장하는 기본 정렬 기준이 less인 빈 컨테이너 생성

        s.insert(50); //랜덤으로 원소(key)를 삽입한다.
        s.insert(30);
        s.insert(80);
        s.insert(40);
        s.insert(10);
        s.insert(70);
        s.insert(90);

        set<int>::iterator iter; // 기본 정렬 기준이 less인 set의 양방향 반복자
        for (iter = s.begin(); iter != s.end(); ++iter)
            cout << *iter << " "; // inorder 2진 트리 탐색 순서로 출력된다.
        cout << endl;

        s.insert(50); //중복된 원소(key)를 삽입한다. 실패!!
        s.insert(50);

        for (iter = s.begin(); iter != s.end(); ++iter)
            cout << *iter << " "; // 결과는 같다.
        cout << endl;
    }
}
#pragma endregion Sample 7-1
#pragma region S7_2
namespace S7_2
{
    void main(void)
    {
        set<int> s;

        pair<set<int>::iterator, bool> pr;

        pr = s.insert(50); // 50 원소의 첫 번째 삽입
        s.insert(40);
        s.insert(80);

        if (true == pr.second)
            cout << *pr.first << " 삽입 성공!" << endl;
        else
            cout << *pr.first << "가 이미 있습니다. 삽입 실패!" << endl;

        set<int>::iterator iter;
        for (iter = s.begin(); iter != s.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        pr = s.insert(50); // 50 원소의 두 번째 삽입. 실패!!

        if (true == pr.second)
            cout << *pr.first << " 삽입 성공!" << endl;
        else
            cout << *pr.first << "가 이미 있습니다. 삽입 실패!" << endl;

        for (iter = s.begin(); iter != s.end(); ++iter)
            cout << *iter << " ";
        cout << endl;
    }
}
#pragma endregion Sample 7-2
#pragma region S7_3
namespace S7_3
{
    void main(void)
    {
        set<int> s;
        pair<set<int>::iterator, bool> pr;

        s.insert(50);
        s.insert(30);
        s.insert(80);
        s.insert(40);
        s.insert(10);
        s.insert(70);
        pr = s.insert(90); //pr.first는 90원소의 반복자


        set<int>::iterator iter;
        for (iter = s.begin(); iter != s.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        s.insert(pr.first, 85); //90원소의 반복자에서 검색 시작 후 삽입한다. 

        for (iter = s.begin(); iter != s.end(); ++iter)
            cout << *iter << " ";
        cout << endl;
    }
}
#pragma endregion Sample 7-3
#pragma region S7_4
namespace S7_4
{
    void main(void)
    {
        set<int, greater<int> > s; // 정렬 기준으로 greater<int> 조건자를 사용.

        s.insert(50);
        s.insert(30);
        s.insert(80);
        s.insert(40);
        s.insert(10);
        s.insert(70);
        s.insert(90);


        // greater<int> 조건자를 사용하는 반복자 생성
        set<int, greater<int> >::iterator iter;
        for (iter = s.begin(); iter != s.end(); ++iter)
            cout << *iter << " ";
        cout << endl;
    }
}
#pragma endregion Sample 7-4
#pragma region S7_5
namespace S7_5
{
    void main(void)
    {
        set<int, less<int> > s_less; // set<int> s와 같습니다.
        set<int, greater<int> > s_greater; // 정렬 기준으로 greater<int> 조건자를 사용.

        s_less.insert(50);
        s_less.insert(80);
        s_less.insert(40);

        s_greater.insert(50);
        s_greater.insert(80);
        s_greater.insert(40);

        set<int, less<int> >::key_compare l_cmp = s_less.key_comp();
        cout << l_cmp(10, 20) << endl; // 10 < 20 연산

        set<int, greater<int> >::key_compare g_cmp = s_greater.key_comp();
        cout << g_cmp(10, 20) << endl; // 10 > 20 연산

        cout << "key_compare type: " << typeid(s_less.key_comp()).name() << endl;
        cout << "key_compare type: " << typeid(s_greater.key_comp()).name() << endl;
        cout << "value_compare type: " << typeid(s_less.value_comp()).name() << endl;
        cout << "value_compare type: " << typeid(s_greater.value_comp()).name() << endl;
    }
}
#pragma endregion Sample 7-5
#pragma region S7_6
namespace S7_6
{
    int main(void)
    {
        set<int> s;

        s.insert(50);
        s.insert(30);
        s.insert(80);
        s.insert(40);
        s.insert(10);
        s.insert(70);
        s.insert(90);

        set<int>::iterator iter;
        for (iter = s.begin(); iter != s.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        cout << "원소 50의 개수: " << s.count(50) << endl;
        cout << "원소 100의 개수: " << s.count(100) << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-6
#pragma region S7_7
namespace S7_7
{
    int main(void)
    {
        set<int> s;

        s.insert(50);
        s.insert(30);
        s.insert(80);
        s.insert(40);
        s.insert(10);
        s.insert(70);
        s.insert(90);

        set<int>::iterator iter;
        for (iter = s.begin(); iter != s.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        iter = s.find(30); // 30의 반복자를 반환
        if (iter != s.end())
            cout << *iter << "가 s에 있다!" << endl;
        else
            cout << "20이 s에 없다!" << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-7
#pragma region S7_8
namespace S7_8
{
    int main(void)
    {
        set<int, less<int> > s; // 정렬 기준 less

        // 30과 50의 비교
        cout << (!s.key_comp()(30, 50) && !s.key_comp()(50, 30)) << endl; //다르다
        // 30과 30의 비교
        cout << (!s.key_comp()(30, 30) && !s.key_comp()(30, 30)) << endl; //같다(equivalence)

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-8
#pragma region S7_9
namespace S7_9
{
    int main(void)
    {
        set<int> s;

        s.insert(50);
        s.insert(30);
        s.insert(80);
        s.insert(40);
        s.insert(10);
        s.insert(70);
        s.insert(90);

        set<int>::iterator iter;
        for (iter = s.begin(); iter != s.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        set<int>::iterator iter_lower;
        set<int>::iterator iter_upper;

        iter_lower = s.lower_bound(30);
        iter_upper = s.upper_bound(30);
        cout << *iter_lower << endl;
        cout << *iter_upper << endl;

        iter_lower = s.lower_bound(55);
        iter_upper = s.upper_bound(55);
        if (iter_lower != iter_upper)
            cout << "55가 s에 있음!" << endl;
        else
            cout << "55가 s에 없음!" << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-9
#pragma region S7_10
namespace S7_10
{
    int main(void)
    {
        set<int> s;

        s.insert(50);
        s.insert(30);
        s.insert(80);
        s.insert(40);
        s.insert(10);
        s.insert(70);
        s.insert(90);

        set<int>::iterator iter;
        for (iter = s.begin(); iter != s.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        pair<set<int>::iterator, set<int>::iterator> iter_pair; //반복자 쌍의 pair 객체

        iter_pair = s.equal_range(30);
        cout << *iter_pair.first << endl;
        cout << *iter_pair.second << endl;

        iter_pair = s.equal_range(55);
        if (iter_pair.first != iter_pair.second)
            cout << "55가 s에 있음!" << endl;
        else
            cout << "55가 s에 없음!" << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-10
#pragma region S7_11
namespace S7_11
{
    int main(void)
    {
        multiset<int> ms;
        multiset<int>::iterator iter;

        ms.insert(50);
        ms.insert(30);
        ms.insert(80);
        ms.insert(80); // 80 중복
        ms.insert(30); // 30 중복
        ms.insert(70);
        iter = ms.insert(10);

        cout << "iter의 원소: " << *iter << endl;

        for (iter = ms.begin(); iter != ms.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-11
#pragma region S7_12
namespace S7_12
{
    int main(void)
    {
        multiset<int> ms;

        ms.insert(50);
        ms.insert(30);
        ms.insert(80);
        ms.insert(80); // 80 중복
        ms.insert(30); // 30 중복
        ms.insert(70);
        ms.insert(10);

        multiset<int>::iterator iter;
        for (iter = ms.begin(); iter != ms.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        cout << "30 원소의 개수: " << ms.count(30) << endl; // 30 원소의 개수

        iter = ms.find(30); // 30 첫 번째 원소의 반복자
        cout << "iter: " << *iter << endl;

        multiset<int>::iterator lower_iter;
        multiset<int>::iterator upper_iter;

        lower_iter = ms.lower_bound(30); // 30 순차열의 시작 반복자
        upper_iter = ms.upper_bound(30); // 30 순차열의 끝 표시 반복자
        cout << "lower_iter: " << *lower_iter << ",  " << "upper_iter: " << *upper_iter << endl;

        cout << "구간 [lower_iter, upper_iter)의 순차열: ";
        for (iter = lower_iter; iter != upper_iter; ++iter)
            cout << *iter << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-12
#pragma region S7_13
namespace S7_13
{
    int main(void)
    {
        multiset<int> ms;

        ms.insert(50);
        ms.insert(30);
        ms.insert(80);
        ms.insert(80); // 80 중복
        ms.insert(30); // 30 중복
        ms.insert(70);
        ms.insert(10);

        multiset<int>::iterator iter;
        for (iter = ms.begin(); iter != ms.end(); ++iter)
            cout << *iter << " ";
        cout << endl;

        //multiset의 반복자 쌍(pair) 객체 생성
        pair<multiset<int>::iterator, multiset<int>::iterator> iter_pair;
        iter_pair = ms.equal_range(30);

        for (iter = iter_pair.first; iter != iter_pair.second; ++iter)
            cout << *iter << " "; //[iter_pair.first, iter_pair.second) 구간의 순차열
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-13
#pragma region S7_14
namespace S7_14
{
    int main(void)
    {
        //key, value 모두 정수형인 컨테이너 생성
    //기본 정렬 기준 less
        map<int, int> m;

        m.insert(pair<int, int>(5, 100)); // 임시 pair 객체 생성 후 저장
        m.insert(pair<int, int>(3, 100));
        m.insert(pair<int, int>(8, 30));
        m.insert(pair<int, int>(4, 40));
        m.insert(pair<int, int>(1, 70));
        m.insert(pair<int, int>(7, 100));

        pair<int, int> pr(9, 50);
        m.insert(pr); // pr 객체 생성 후 저장

        map<int, int>::iterator iter;
        for (iter = m.begin(); iter != m.end(); ++iter)
            cout << "(" << (*iter).first << ',' << (*iter).second << ")" << " ";
        cout << endl;

        // 반복자는 -> 연산자가 연산자 오버로딩되어 있으므로 
        //포인터처럼 멤버를 -> 연산자로 접근할 수 있습니다. 
        for (iter = m.begin(); iter != m.end(); ++iter)
            cout << "(" << iter->first << ',' << iter->second << ")" << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-14
#pragma region S7_15
namespace S7_15
{
    int main(void)
    {
        map<int, int> m;
        pair<map<int, int>::iterator, bool> pr; // insert() 결과 pair 객체

        m.insert(pair<int, int>(5, 100));
        m.insert(pair<int, int>(3, 100));
        m.insert(pair<int, int>(8, 30));
        m.insert(pair<int, int>(4, 40));
        m.insert(pair<int, int>(1, 70));
        m.insert(pair<int, int>(7, 100));

        pr = m.insert(pair<int, int>(9, 50)); // 성공!
        if (true == pr.second)
            cout << "key: " << pr.first->first << ", value: " << pr.first->second << " 저장 완료!" << endl;
        else
            cout << "key 9가 이미 m에 있습니다." << endl;

        pr = m.insert(pair<int, int>(9, 50)); // 실패!
        if (true == pr.second)
            cout << "key: " << pr.first->first << ", value: " << pr.first->second << "저장 완료!" << endl;
        else
            cout << "key: 9가 이미 m에 있습니다." << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-15
#pragma region S7_16
namespace S7_16
{
    int main(void)
    {
        map<int, int> m;

        m[5] = 100; //key 5, value 100의 원소를 m에 삽입한다.
        m[3] = 100;
        m[8] = 30;
        m[4] = 40;
        m[1] = 70;
        m[7] = 100;
        m[9] = 50;

        map<int, int>::iterator iter;
        for (iter = m.begin(); iter != m.end(); ++iter)
            cout << "(" << iter->first << ',' << iter->second << ")" << " ";
        cout << endl;

        m[5] = 200; //key 5의 value를 200으로 갱신한다.

        for (iter = m.begin(); iter != m.end(); ++iter)
            cout << "(" << iter->first << ',' << iter->second << ")" << " ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-16
#pragma region S7_17
namespace S7_17
{
    int main(void)
    {
        // greater 정렬 기준의 key:int, value:string 타입의 컨테니어 m 생성.
        map<int, string, greater<int> > m;

        m[5] = "five"; // 원소 추가
        m[3] = "three";
        m[8] = "eight";
        m[4] = "four";
        m[1] = "one";
        m[7] = "seven";
        m[9] = "nine";

        map<int, string, greater<int> >::iterator iter;
        //for (iter = m.begin(); iter != m.end(); ++iter)
        //    cout << "(" << iter->first << ',' << iter->second << ")" << " ";
        cout << endl;


        //cout << m[9] << " "; //key와 매핑된 value를 출력합니다.
        //cout << m[8] << " ";
        //cout << m[7] << " ";
        //cout << m[5] << " ";
        //cout << m[4] << " ";
        //cout << m[3] << " ";
        //cout << m[1] << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-17
#pragma region S7_18
namespace S7_18
{
    int main(void)
    {
        map<int, int> m;

        m[5] = 100;
        m[3] = 100;
        m[8] = 30;
        m[4] = 40;
        m[1] = 70;
        m[7] = 100;
        m[9] = 50;

        map<int, int>::iterator iter;
        for (iter = m.begin(); iter != m.end(); ++iter)
            cout << "(" << iter->first << ',' << iter->second << ")" << " ";
        cout << endl;

        iter = m.find(5);
        if (iter != m.end())
            cout << "key 5에 매핑된 value: " << iter->second << endl;

        map<int, int>::iterator lower_iter;
        map<int, int>::iterator upper_iter;
        lower_iter = m.lower_bound(5);
        upper_iter = m.upper_bound(5);

        cout << "구간 [lower_iter, upper_iter)의 순차열: ";
        for (iter = lower_iter; iter != upper_iter; ++iter)
            cout << "(" << iter->first << ',' << iter->second << ") ";
        cout << endl;

        pair<map<int, int>::iterator, map<int, int>::iterator> iter_pair;
        iter_pair = m.equal_range(5);

        cout << "구간 [iter_pair.first, iter_pair.second)의 순차열: ";
        for (iter = iter_pair.first; iter != iter_pair.second; ++iter)
            cout << "(" << iter->first << ',' << iter->second << ") ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-18
#pragma region S7_20
namespace S7_20
{
    int main(void)
    {
        multimap<int, int> mm;

        mm.insert(pair<int, int>(5, 100));
        mm.insert(pair<int, int>(3, 100));
        mm.insert(pair<int, int>(8, 30));
        mm.insert(pair<int, int>(3, 40));
        mm.insert(pair<int, int>(1, 70));
        mm.insert(pair<int, int>(7, 100));
        mm.insert(pair<int, int>(8, 50));

        multimap<int, int>::iterator iter;
        for (iter = mm.begin(); iter != mm.end(); ++iter)
            cout << "(" << iter->first << ',' << iter->second << ")" << " ";
        cout << endl;

        cout << "key 3의 원소의 개수는 " << mm.count(3) << endl;

        iter = mm.find(3);
        if (iter != mm.end())
            cout << "첫 번째 key 3에 매핑된 value: " << iter->second << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-20
#pragma region S7_21
namespace S7_21
{
    int main(void)
    {
        multimap<int, int> mm;

        mm.insert(pair<int, int>(5, 100));
        mm.insert(pair<int, int>(3, 100));
        mm.insert(pair<int, int>(8, 30));
        mm.insert(pair<int, int>(3, 40));
        mm.insert(pair<int, int>(1, 70));
        mm.insert(pair<int, int>(7, 100));
        mm.insert(pair<int, int>(8, 50));

        multimap<int, int>::iterator lower_iter;
        multimap<int, int>::iterator upper_iter;
        lower_iter = mm.lower_bound(3);
        upper_iter = mm.upper_bound(3);

        cout << "구간 [lower_iter, upper_iter)의 순차열: ";
        multimap<int, int>::iterator iter;
        for (iter = lower_iter; iter != upper_iter; ++iter)
            cout << "(" << iter->first << ',' << iter->second << ") ";
        cout << endl;

        pair<multimap<int, int>::iterator, multimap<int, int>::iterator> iter_pair;
        iter_pair = mm.equal_range(3);

        cout << "구간 [iter_pair.first, iter_pair.second)의 순차열: ";
        for (iter = iter_pair.first; iter != iter_pair.second; ++iter)
            cout << "(" << iter->first << ',' << iter->second << ") ";
        cout << endl;

        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-21


int main(void)
{
    S7_5::main();

    system("pause");
    return 0;
}

/*
#pragma region S7_
namespace S7_
{


    int main(void)
    {


        system("pause");
        return 0;
    }
}
#pragma endregion Sample 7-
*/