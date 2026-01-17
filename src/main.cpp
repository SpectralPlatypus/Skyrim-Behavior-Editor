#include "src/ui/mainwindow.h"
#include <QApplication>

#include <QColor>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.setStyleSheet("QWidget {background: blue;font-weight: bold; color: red}QComboBox {background: yellow}");

    QPalette mPalette;

    mPalette.setColor(QPalette::Window, QColor(53, 53, 53));
    mPalette.setColor(QPalette::WindowText, Qt::white);
    mPalette.setColor(QPalette::Base, QColor(25, 25, 25));
    mPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
    mPalette.setColor(QPalette::ToolTipBase, QColor(53, 53, 53));
    mPalette.setColor(QPalette::ToolTipText, Qt::white);
    mPalette.setColor(QPalette::Text, Qt::white);
    mPalette.setColor(QPalette::PlaceholderText,QColor(127,127,127));
    mPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    mPalette.setColor(QPalette::ButtonText, Qt::white);
    mPalette.setColor(QPalette::BrightText, Qt::red);
    mPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    mPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    mPalette.setColor(QPalette::HighlightedText, Qt::black);
    mPalette.setColor(QPalette::Disabled, QPalette::Text, QColor(164, 166, 168));
    mPalette.setColor(QPalette::Disabled, QPalette::WindowText, QColor(164, 166, 168));
    mPalette.setColor(QPalette::Disabled, QPalette::ButtonText, QColor(164, 166, 168));
    mPalette.setColor(QPalette::Disabled, QPalette::HighlightedText, QColor(164, 166, 168));
    mPalette.setColor(QPalette::Disabled, QPalette::Base, QColor(68, 68, 68));
    mPalette.setColor(QPalette::Disabled, QPalette::Window, QColor(68, 68, 68));
    mPalette.setColor(QPalette::Disabled, QPalette::Highlight, QColor(68, 68, 68));

    a.setPalette(mPalette);
    a.setStyle("fusion");

    w.setWindowTitle("Skyrim Behavior Tool");
    w.show();

    return a.exec();
}
