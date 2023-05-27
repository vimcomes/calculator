//
// Created by vimco on 011 11.05.2023.
//

#ifndef CALCULATOR_CALCULATORMAINWINDOW_H
#define CALCULATOR_CALCULATORMAINWINDOW_H
#pragma once
#include <QMainWindow>
#include <QtWidgets/QLineEdit>

class CalculatorMainWindow : public QMainWindow {

    Q_OBJECT
    bool plusClicked = false;
    bool minusClicked = false;
    bool multiplicationClicked = false;
    bool divideClicked = false;
    bool equalClicked = false;
public:
    QLineEdit* lineEdit_resultNumber = nullptr;
    QLineEdit* lineEdit_secondNumber = nullptr;
    QLineEdit* lineEdit_firstNumber = nullptr;
    explicit CalculatorMainWindow(QWidget* parent): QMainWindow(parent) {}


public slots:
    void plus(){
        if (!lineEdit_secondNumber->text().isEmpty() && !plusClicked && !minusClicked && !multiplicationClicked && !divideClicked && !equalClicked) {
            plusClicked = true;
        }
    };
    void minus(){
        if (!lineEdit_secondNumber->text().isEmpty() && !plusClicked && !minusClicked && !multiplicationClicked && !divideClicked && !equalClicked) {
            minusClicked = true;
        }

    };
    void multiplication(){
        if (!lineEdit_secondNumber->text().isEmpty() && !plusClicked && !minusClicked && !multiplicationClicked && !divideClicked && !equalClicked) {
            multiplicationClicked = true;
        }

    };
    void divide(){
        if (!lineEdit_secondNumber->text().isEmpty() && !plusClicked && !minusClicked && !multiplicationClicked && !divideClicked && !equalClicked) {
            divideClicked = true;
        }

    };

    void result(){
        equalClicked = true;
        if (!lineEdit_firstNumber->text().isEmpty()) {
            if (plusClicked) {
                double num1 = (lineEdit_secondNumber->text()).toDouble();
                double num2 = (lineEdit_firstNumber->text()).toDouble();
                QString result = QString::number(num1 + num2);
                lineEdit_resultNumber->setText(result);
                plusClicked = false;
            } else if (minusClicked) {
                double num1 = (lineEdit_secondNumber->text()).toDouble();
                double num2 = (lineEdit_firstNumber->text()).toDouble();
                QString result = QString::number(num1 - num2);
                lineEdit_resultNumber->setText(result);
                minusClicked = false;
            } else if (multiplicationClicked) {
                double num1 = (lineEdit_secondNumber->text()).toDouble();
                double num2 = (lineEdit_firstNumber->text()).toDouble();
                QString result = QString::number(num1 * num2);
                lineEdit_resultNumber->setText(result);
                multiplicationClicked = false;
            } else if (divideClicked) {
                double num1 = (lineEdit_secondNumber->text()).toDouble();
                double num2 = (lineEdit_firstNumber->text()).toDouble();
                QString result;
                if (num2 == 0.0) { //divide by zero error
                    result = "ERROR!";
                    lineEdit_resultNumber->setText(result);
                    divideClicked = false;
                } else {
                    result = QString::number(num1 / num2);
                    lineEdit_resultNumber->setText(result);
                    divideClicked = false;
                }

            }
        }


    };

    void clear() {
        lineEdit_resultNumber->clear();
        lineEdit_secondNumber->clear();
        lineEdit_firstNumber->clear();
        equalClicked = false;
    }

    void dot() const {
        if (plusClicked || minusClicked || multiplicationClicked || divideClicked) {
            if (!(lineEdit_firstNumber->text().contains("."))) {
                lineEdit_firstNumber->setText(lineEdit_firstNumber->text() + ".");
            }
        } else if (!equalClicked){
            if (!(lineEdit_secondNumber->text().contains("."))) {
                lineEdit_secondNumber->setText(lineEdit_secondNumber->text() + ".");
            }
        }
    }
    void add0() const {
        if (plusClicked || minusClicked || multiplicationClicked || divideClicked) {
            lineEdit_firstNumber->setText(lineEdit_firstNumber->text() + "0");
        } else if (!equalClicked){
            lineEdit_secondNumber->setText(lineEdit_secondNumber->text() + "0");
        }
    };
    void add1() const {
        if (plusClicked || minusClicked || multiplicationClicked || divideClicked) {
            lineEdit_firstNumber->setText(lineEdit_firstNumber->text() + "1");
        } else if (!equalClicked){
            lineEdit_secondNumber->setText(lineEdit_secondNumber->text() + "1");
        }
    };
    void add2() const {
        if (plusClicked || minusClicked || multiplicationClicked || divideClicked) {
            lineEdit_firstNumber->setText(lineEdit_firstNumber->text() + "2");
        } else if (!equalClicked){
            lineEdit_secondNumber->setText(lineEdit_secondNumber->text() + "2");
        }
    };
    void add3() const {
        if (plusClicked || minusClicked || multiplicationClicked || divideClicked) {
            lineEdit_firstNumber->setText(lineEdit_firstNumber->text() + "3");
        } else if (!equalClicked){
            lineEdit_secondNumber->setText(lineEdit_secondNumber->text() + "3");
        }
    };
    void add4() const {
        if (plusClicked || minusClicked || multiplicationClicked || divideClicked) {
            lineEdit_firstNumber->setText(lineEdit_firstNumber->text() + "4");
        } else if (!equalClicked){
            lineEdit_secondNumber->setText(lineEdit_secondNumber->text() + "4");
        }
    };
    void add5() const {
        if (plusClicked || minusClicked || multiplicationClicked || divideClicked) {
            lineEdit_firstNumber->setText(lineEdit_firstNumber->text() + "5");
        } else if (!equalClicked){
            lineEdit_secondNumber->setText(lineEdit_secondNumber->text() + "5");
        }
    };
    void add6() const {
        if (plusClicked || minusClicked || multiplicationClicked || divideClicked) {
            lineEdit_firstNumber->setText(lineEdit_firstNumber->text() + "6");
        } else if (!equalClicked){
            lineEdit_secondNumber->setText(lineEdit_secondNumber->text() + "6");
        }
    };
    void add7() const {
        if (plusClicked || minusClicked || multiplicationClicked || divideClicked) {
            lineEdit_firstNumber->setText(lineEdit_firstNumber->text() + "7");
        } else if (!equalClicked){
            lineEdit_secondNumber->setText(lineEdit_secondNumber->text() + "7");
        }
    };
    void add8() const {
        if (plusClicked || minusClicked || multiplicationClicked || divideClicked) {
            lineEdit_firstNumber->setText(lineEdit_firstNumber->text() + "8");
        } else if (!equalClicked){
            lineEdit_secondNumber->setText(lineEdit_secondNumber->text() + "8");
        }
    };
    void add9() const {
        if (plusClicked || minusClicked || multiplicationClicked || divideClicked) {
            lineEdit_firstNumber->setText(lineEdit_firstNumber->text() + "9");
        } else if (!equalClicked){
            lineEdit_secondNumber->setText(lineEdit_secondNumber->text() + "9");
        }
    };
};
#endif //CALCULATOR_CALCULATORMAINWINDOW_H
