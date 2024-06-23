#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE

namespace Ui {
class Calculator;

}

QT_END_NAMESPACE

class Calculator: public QMainWindow {
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;

    double calcVal = 0.0;
    QMap<QString, bool> mathTrigger;

    QString butMul = "ButtonMul";
    QString butDivide = "ButtonDivide";
    QString butPlus = "ButtonPlus";
    QString butMinus = "ButtonMinus";

    void mapMathBool(QString math);
    void mathAllFalse();
    std::optional<QString> mathButtonIsPressend();
    QString toEquals(QString mathOperation, QString dispValue);


private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualsPressed();
    void ResetPressed();
    void CommaPressed();
    void ChangeSign();
    void takePrecent();
};

#endif // CALCULATOR_H
