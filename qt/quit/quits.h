#ifndef QUITS_H
#define QUITS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class quits; }
QT_END_NAMESPACE

class quits : public QMainWindow
{
    Q_OBJECT

public:
    quits(QWidget *parent = nullptr);
    ~quits();

private:
    Ui::quits *ui;
};
#endif // QUITS_H
