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


private slots:


private:
    Ui::ListUnitWidget *ui;
};

#endif // LISTUNITWIDGET_H
