#ifndef KEYPRESS_H
#define KEYPRESS_H

#include <QWidget>
#include <QtGui>
#include <QLabel>
#include <QVBoxLayout>

using namespace std;
using namespace Qt;

class KeyPress : public QWidget
{
    Q_OBJECT
public:
    explicit KeyPress(QWidget *parent = 0);
protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    QString *showText;
    QString *correctText;
    const static map<int, char> keyTable;
    const static map<char, char> shiftTable;
    static map<int, char> makeKeyTable()
    {
        map<int, char> tKeyTable = {
            {Key_A, 'a'},
            {Key_B, 'b'},
            {Key_C, 'c'},
            {Key_D, 'd'},
            {Key_E, 'e'},
            {Key_F, 'f'},
            {Key_G, 'g'},
            {Key_H, 'h'},
            {Key_I, 'i'},
            {Key_J, 'j'},
            {Key_K, 'k'},
            {Key_L, 'l'},
            {Key_M, 'm'},
            {Key_N, 'n'},
            {Key_O, 'o'},
            {Key_P, 'p'},
            {Key_Q, 'q'},
            {Key_R, 'r'},
            {Key_S, 's'},
            {Key_T, 't'},
            {Key_U, 'u'},
            {Key_V, 'v'},
            {Key_W, 'w'},
            {Key_X, 'x'},
            {Key_Y, 'y'},
            {Key_Z, 'z'},
            {Key_0, '0'},
            {Key_1, '1'},
            {Key_2, '2'},
            {Key_3, '3'},
            {Key_4, '4'},
            {Key_5, '5'},
            {Key_6, '6'},
            {Key_7, '7'},
            {Key_8, '8'},
            {Key_9, '9'},
            {Key_Exclam, '!'},
            {Key_At, '@'},
            {Key_NumberSign, '#'},
            {Key_Dollar, '$'},
            {Key_Percent, '%'},
            {Key_AsciiCircum, '^'},
            {Key_Ampersand, '&'},
            {Key_Asterisk, '*'},
            {Key_ParenLeft, '('},
            {Key_ParenRight, ')'},
            {Key_Minus, '-'},
            {Key_Underscore, '_'},
            {Key_Plus, '+'},
            {Key_Equal, '='},
            {Key_BracketLeft, '['},
            {Key_BracketRight, ']'},
            {Key_BraceLeft, '{'},
            {Key_BraceRight, '}'},
            {Key_Semicolon, ';'},
            {Key_Colon, ':'},
            {Key_Apostrophe, '\''},
            {Key_QuoteDbl, '"'},
            {Key_Comma, ','},
            {Key_Less, '<'},
            {Key_Period, '.'},
            {Key_Greater, '>'},
            {Key_Question, '?'},
            {Key_Slash, '/'},
            {Key_Space, ' '},
        };
        return tKeyTable;
    }
    static map<char, char> makeShiftTable()
    {
        map<char, char> tShiftTable = {
            {'a', 'A'},
            {'b', 'B'},
            {'c', 'C'},
            {'d', 'D'},
            {'e', 'E'},
            {'f', 'F'},
            {'g', 'G'},
            {'h', 'H'},
            {'i', 'I'},
            {'j', 'J'},
            {'k', 'K'},
            {'l', 'L'},
            {'m', 'M'},
            {'n', 'N'},
            {'o', 'O'},
            {'p', 'P'},
            {'q', 'Q'},
            {'r', 'R'},
            {'s', 'S'},
            {'t', 'T'},
            {'u', 'U'},
            {'v', 'V'},
            {'w', 'W'},
            {'x', 'X'},
            {'y', 'Y'},
            {'z', 'Z'},
            {'0', ')'},
            {'1', '!'},
            {'2', '@'},
            {'3', '#'},
            {'4', '$'},
            {'5', '%'},
            {'6', '^'},
            {'7', '&'},
            {'8', '*'},
            {'9', '('},
            {'-', '_'},
            {'=', '+'},
            {'[', '{'},
            {']', '}'},
        };
        return tShiftTable;
    }

private:
     QLabel *myLabelText;
     QVBoxLayout *mainLayout;

signals:

};


#endif // KEYPRESS_H
