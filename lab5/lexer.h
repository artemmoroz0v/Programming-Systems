#ifndef LEXER_H
#define LEXER_H
#include "baselexer.h"
class tLexer :public tBaseLexer {
public:
    //�����������
    tLexer() :tBaseLexer() {
        //������� ��������:

        //________________________________________

        // ������������
        addstr(Adec, 0, "+-", 1);
        addrange(Adec, 0, '0', '9', 1);
        addrange(Adec, 1, '0', '9', 1);
        addstr(Adec, 1, ".", 2);
        addrange(Adec, 2, '0', '9', 3);
        addrange(Adec, 3, '0', '9', 3);
        addstr(Adec, 3, "eE", 4);
        addrange(Adec, 4, '0', '9', 6);
        addstr(Adec, 4, "+-", 5);
        addrange(Adec, 5, '0', '9', 6);
        addrange(Adec, 6, '0', '9', 6);
        Adec.final(6);
        //________________________________________

        // �������������
        addstr(Aid, 0, "!", 1);
        addrange(Aid, 0, 'a', 'z', 1);
        addrange(Aid, 0, 'A', 'Z', 1);
        addstr(Aid, 0, "?", 2);
        addstr(Aid, 1, "!", 1);
        addstr(Aid, 1, "-", 1);
        addrange(Aid, 1, '0', '9', 1);
        addrange(Aid, 1, 'a', 'z', 1);
        addrange(Aid, 1, 'A', 'Z', 1);
        addstr(Aid, 1, "?", 2);
        addstr(Aid, 2, "!", 1);
        addrange(Aid, 2, '0', '9', 1);
        addrange(Aid, 2, 'a', 'z', 1);
        addrange(Aid, 2, 'A', 'Z', 1);
        addstr(Aid, 2, "?", 2);
        Aid.final(1);
        //________________________________________

        // ������������� ���������
        addstr(Aidq, 0, "!-", 1);
        addrange(Aidq, 0, 'a', 'z', 1);
        addrange(Aidq, 0, 'A', 'Z', 1);
        addstr(Aidq, 0, "?", 2);
        addstr(Aidq, 1, "!-", 1);
        addrange(Aidq, 1, '0', '9', 1);
        addrange(Aidq, 1, 'a', 'z', 1);
        addrange(Aidq, 1, 'A', 'Z', 1);
        addstr(Aidq, 1, "?", 2);
        addstr(Aidq, 2, "!-", 1);
        addstr(Aidq, 2, "?", 2);
        addrange(Aidq, 2, '0', '9', 1);
        addrange(Aidq, 2, 'a', 'z', 1);
        addrange(Aidq, 2, 'A', 'Z', 1);
        addstr(Aidq, 2, "-", 3);
        addstr(Aidq, 3, "?", 2);
        addstr(Aidq, 3, "-", 1);
        addrange(Aidq, 3, '0', '9', 1);
        addrange(Aidq, 3, 'a', 'z', 1);
        addrange(Aidq, 3, 'A', 'Z', 1);
        Aidq.final(2);
    }
};
#endif


