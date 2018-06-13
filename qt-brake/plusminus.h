#pragma once

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>

class PlusMinus : public QWidget {

  Q_OBJECT

  public:
    PlusMinus(QWidget *parent = 0);

  private slots:
    void OnPlus();
    void OnMinus();

  private:
    QLabel *lbl;

};
