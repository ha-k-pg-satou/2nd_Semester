
#include "Common.h"
#include "Unit.h"

/*
    リファクタリングとしてやってほしいこと
      ・クラス名をunitという、よりふさわしいものに変更する
      ・unit.cppとunit.hを作成して、クラスの宣言と実装をそちらに移す
      ・stdlib.hとstdio.hはcommon.hにまとめる
*/

//class Fighter
//{
//public:
//    Fighter();
//    
//    ~Fighter();
//    int m_hp;
//    int m_str;
//    int m_mag;
//    int m_tec;
//    int m_spd;
//    int m_def;
//    int m_luc;
//    int m_mde;
//};
//
//Fighter::Fighter()
//{
//    m_hp = 0;
//    m_str = 0;
//    m_mag = 0;
//    m_tec = 0;
//    m_spd = 0;
//    m_def = 0;
//    m_luc = 0;
//    m_mde = 0;
//}
//
//Fighter::~Fighter()
//{
//
//}

int main()
{
    Unit unit;
    unit.PrintStatus();

    system("pause");
    return 0;
}

