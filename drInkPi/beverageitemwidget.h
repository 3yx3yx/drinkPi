#ifndef BEVERAGEITEMWIDGET_H
#define BEVERAGEITEMWIDGET_H

#include <QWidget>

namespace Ui {
class beverageItemWidget;
}

class beverageItemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit beverageItemWidget(QWidget *parent = nullptr);
    ~beverageItemWidget();

    void setWidget (int pumpN, QString s, QStringList list);

private:
    Ui::beverageItemWidget *ui;
};

#endif // BEVERAGEITEMWIDGET_H
