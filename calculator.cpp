#include "calculator.h"
#include "./ui_calculator.h"


Calculator::Calculator(QWidget *parent): QMainWindow(parent), ui(new Ui::Calculator) {
    ui->setupUi(this);
    ui->Display->setText(QString::number(this->calcVal));

    mathTrigger.insert("/", false);
    mathTrigger.insert("*", false);
    mathTrigger.insert("+", false);
    mathTrigger.insert("-", false);

    QPushButton *numButtons[10];
    for (int i = 0; i < 10; i++) {
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }

    connect(ui->ButtonPlus, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->ButtonMinus, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->ButtonDivide, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->ButtonMul, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    connect(ui->ButtonEquals, SIGNAL(released()), this,
            SLOT(EqualsPressed()));
    connect(ui->ButtonReset, SIGNAL(released()), this,
            SLOT(ResetPressed()));
    connect(ui->ButtonComma, SIGNAL(released()), this,
            SLOT(CommaPressed()));
    connect(ui->ButtonChangeSign, SIGNAL(released()), this,
            SLOT(ChangeSign()));
    connect(ui->ButtonPercent, SIGNAL(released()), this,
            SLOT(takePrecent()));

}

Calculator::~Calculator() {
    delete ui;
}


void Calculator::NumPressed() {
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if ((QString::compare(butVal, "0")) == 0) {
    // if ((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)) {
         ui->Display->setText(butVal);
    } else {
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
    qInfo("Display text: %s", ui->Display->displayText().toStdString().c_str());

}


void Calculator::MathButtonPressed() {
    this->calcVal = ui->Display->displayText().toDouble();
    qInfo("Calc value: %f\n", this->calcVal);

    ui->Display->setText("");
    QPushButton *button = (QPushButton *)sender();
    mapMathBool(button->text());

}


void Calculator::EqualsPressed() {
    auto nameMathButtonPressed = mathButtonIsPressend();
    if (nameMathButtonPressed.has_value()) {
        std::optional<QString> dispText = ui->Display->text();
        if (dispText.has_value()) {
            ui->Display->setText(
                toEquals(nameMathButtonPressed.value(), dispText.value())
            );
        }
    }

}

void Calculator::ResetPressed() {
    this->calcVal = 0.0;
    ui->Display->setText("0");
}

void Calculator::CommaPressed(){
    ui->Display->setText(ui->Display->text() + ".");
}

void Calculator::ChangeSign() {
    mathAllFalse();
    ui->Display->setText(QString::number(this->calcVal));
}

void Calculator::takePrecent() {
    ui->Display->setText(
        QString::number(ui->Display->displayText().toDouble() / 100)
    );
}


void Calculator::mapMathBool(QString math) {
    for (auto [key, value] : this->mathTrigger.asKeyValueRange()) {
        if (QString::compare(math, key) == 0) {
            value = true;
            qInfo("%s: %d", key.toStdString().c_str(), value);
        }
        else
            value = false;
    }
}

void Calculator::mathAllFalse() {
    for (auto [key, value] : this->mathTrigger.asKeyValueRange()) {
        value = false;
    }
}


std::optional<QString> Calculator::mathButtonIsPressend() {
    for (auto [key, value] : this->mathTrigger.asKeyValueRange()) {
        //qInfo("%s: %d", key.toStdString().c_str(), value);
        if (value)
            return key;
    }
    return std::nullopt;
}

QString Calculator::toEquals(QString mathOperation, QString dispValue) {
    auto dispValueMap = dispValue.toDouble();
    if (QString::compare(mathOperation, "*") == 0) {
        this->calcVal *= dispValueMap;

    } else if (QString::compare(mathOperation, "/") == 0) {
        this->calcVal /= dispValueMap;

    } else if (QString::compare(mathOperation, "+") == 0) {
        this->calcVal += dispValueMap;

    } else if (QString::compare(mathOperation, "-") == 0) {
        this->calcVal -= dispValueMap;
    }
    mathAllFalse();
    qInfo("result: %f", this->calcVal);
    return QString::number(this->calcVal);

}









