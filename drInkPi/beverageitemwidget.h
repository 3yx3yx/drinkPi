#ifndef BEVERAGEITEMWIDGET_H
#define BEVERAGEITEMWIDGET_H

#include <QWidget>


#define NONE_BEVERAGE_TXT "..."

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

    QString getText (void);
    int getNumber (void);

signals:
    void selectionChanged (QString s, beverageItemWidget *obj);

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::beverageItemWidget *ui;
};

#endif // BEVERAGEITEMWIDGET_H
