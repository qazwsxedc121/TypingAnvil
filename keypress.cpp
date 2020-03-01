#include <QApplication>
#include <QKeyEvent>
#include "keypress.h"

const map<int, char> KeyPress::keyTable = KeyPress::makeKeyTable();
const map<char, char> KeyPress::shiftTable = KeyPress::makeShiftTable();

KeyPress::KeyPress(QWidget *parent) : QWidget(parent)
{
        myLabelText = new QLabel("no press");
        mainLayout = new QVBoxLayout;
        showText = new QString();
        correctText = new QString();
        mainLayout->addWidget(myLabelText);
        setLayout(mainLayout);
}

void KeyPress::keyPressEvent(QKeyEvent *event)
{
        int key = event->key();
        if(keyTable.find(key) != keyTable.end()){
            char newChar = keyTable.at(key);
            if(event->modifiers() & Qt::ShiftModifier){
                if (shiftTable.find(newChar) != shiftTable.end())
                    newChar = shiftTable.at(newChar);
            }
            showText->append(newChar);
        }else if(key == Qt::Key_Shift) {

        }
        else{
            QString s;
            s.sprintf(" <unknown:%x> ", key);
            showText->append(s);
        }
        myLabelText->setText(*showText);
}

void KeyPress::keyReleaseEvent(QKeyEvent *event)
{

}
