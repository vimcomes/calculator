#include <QApplication>
#include "calculatorMainWindow.h"
#include <./ui_calculator.h>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalculatorMainWindow window(nullptr);
    Ui::MainWindow calculator;
    calculator.setupUi(&window);
    window.lineEdit_resultNumber = calculator.lineEdit_Result;
    window.lineEdit_secondNumber = calculator.lineEdit_firstNumber;
    window.lineEdit_firstNumber = calculator.lineEdit_secondNumber;
    window.resize(340, 365);
    window.show();
    return QApplication::exec();
}
