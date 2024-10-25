#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <accurate.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void ChangeColor();
    void ColorInitialise();
    void BlockSliders();
    void UnBlockSliders();
signals:
    void InitialiseAccurate();

private slots:
    void on_RedSlider_valueChanged(int value);

    void on_BlueSlider_valueChanged(int value);

    void on_GreenSlider_valueChanged(int value);

    void on_CyanSlider_valueChanged(int value);

    void on_MagentaSlider_valueChanged(int value);

    void on_YellowSlider_valueChanged(int value);

    void on_BlackSlider_valueChanged(int value);

    void on_HueSlider_valueChanged(int value);

    void on_SaturationSlider_valueChanged(int value);

    void on_ValueSlider_valueChanged(int value);

    void on_Palitre_triggered();

    void on_action_2_triggered();

    void ChangingColor();

private:
    Ui::MainWindow *ui;
    Accurate* accurate;
    QColor color;
    void closeEvent(QCloseEvent*);
};
#endif // MAINWINDOW_H
