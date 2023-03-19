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
    void setItem (QString s, bool star);
    QString getText (void);


private slots:
    void on_starButton_clicked();

private:
    Ui::ListUnitWidget *ui;
};

#endif // LISTUNITWIDGET_H
