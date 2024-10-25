#ifndef ACCURATE_H
#define ACCURATE_H

#include <QtWidgets>

namespace Ui {
class Accurate;
}

class Accurate : public QWidget
{
    Q_OBJECT

public:
    explicit Accurate(QColor*, QWidget *parent = nullptr);
    ~Accurate();
    void ColorInitialise();
    void BlockTypes();
    void UnBlockTypes();
signals:
    void ColorChanging(int h = 0);
private slots:
    void on_RedS_valueChanged(int argument);

    void on_BlueS_valueChanged(int argument);

    void on_GreenS_valueChanged(int argument);

    void on_CyanS_valueChanged(int argument);

    void on_MagentaS_valueChanged(int argument);

    void on_YellowS_valueChanged(int argument);

    void on_BlackS_valueChanged(int argument);

    void on_HueS_valueChanged(int argument);

    void on_SaturationS_valueChanged(int argument);

    void on_ValueS_valueChanged(int argument);

    void InitialiseColors();

private:
    Ui::Accurate *ui;
    QColor* color;
};

#endif // ACCURATE_H
