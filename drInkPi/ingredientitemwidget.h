#ifndef INGREDIENTITEMWIDGET_H
#define INGREDIENTITEMWIDGET_H

#include <QWidget>

namespace Ui {
class ingredientItemWidget;
}

class ingredientItemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ingredientItemWidget(QWidget *parent = nullptr);
    ~ingredientItemWidget();

    void setList (QStringList list);
    QString getSelected (void);
    float getOz (void);
private:
    Ui::ingredientItemWidget *ui;
};

#endif // INGREDIENTITEMWIDGET_H
