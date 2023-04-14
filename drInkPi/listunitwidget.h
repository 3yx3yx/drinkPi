#ifndef LISTUNITWIDGET_H
#define LISTUNITWIDGET_H

#include <QWidget>

namespace Ui {
class ListUnitWidget;
}

class ListUnitWidget : public QWidget
{
    Q_OBJECT

public:
    ListUnitWidget(QWidget *parent = nullptr);
    ~ListUnitWidget();
    void setItemString (QString s);
    QString getText (void);

public: signals:

    void pressed (QString name);


private slots:


    void on_pushButton_clicked();

private:
    Ui::ListUnitWidget *ui;
};

#endif // LISTUNITWIDGET_H
