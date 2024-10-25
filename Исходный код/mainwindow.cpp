#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Цветовая модель");
    color = Qt::black;
    ChangeColor();
    ui->RedSlider->setRange(0, 254);
    ui->BlueSlider->setRange(0, 254);
    ui->BlueSlider->setValue(254);
    ui->GreenSlider->setRange(0, 254);
    ui->CyanSlider->setRange(0, 254);
    ui->MagentaSlider->setRange(0, 254);
    ui->YellowSlider->setRange(0, 254);
    ui->BlackSlider->setRange(0, 254);
    accurate = new Accurate(&color);
    connect(accurate, SIGNAL(ColorChanging()), this,
            SLOT(ChangingColor()));
    connect(this, SIGNAL(InitialiseAccurate()), accurate,
            SLOT(InitialiseColors()));
    ColorInitialise();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ChangeColor()
{
    QPixmap pixmap(ui->Main_label->size());
    pixmap.fill(color);
    ui->Main_label->setPixmap(pixmap);
}

void MainWindow::BlockSliders()
{
    ui->RedSlider->blockSignals(true);
    ui->BlueSlider->blockSignals(true);
    ui->GreenSlider->blockSignals(true);
    ui->CyanSlider->blockSignals(true);
    ui->MagentaSlider->blockSignals(true);
    ui->YellowSlider->blockSignals(true);
    ui->BlackSlider->blockSignals(true);
    ui->HueSlider->blockSignals(true);
    ui->SaturationSlider->blockSignals(true);
    ui->ValueSlider->blockSignals(true);
}

void MainWindow::UnBlockSliders()
{
    ui->RedSlider->blockSignals(false);
    ui->BlueSlider->blockSignals(false);
    ui->GreenSlider->blockSignals(false);
    ui->CyanSlider->blockSignals(false);
    ui->MagentaSlider->blockSignals(false);
    ui->YellowSlider->blockSignals(false);
    ui->BlackSlider->blockSignals(false);
    ui->HueSlider->blockSignals(false);
    ui->SaturationSlider->blockSignals(false);
    ui->ValueSlider->blockSignals(false);
}

void MainWindow::ColorInitialise()
{
    BlockSliders();
    ui->RedSlider->setValue(color.red());
    ui->BlueSlider->setValue(color.blue());
    ui->GreenSlider->setValue(color.green());
    ui->CyanSlider->setValue(color.cyan());
    ui->MagentaSlider->setValue(color.magenta());
    ui->YellowSlider->setValue(color.yellow());
    ui->BlackSlider->setValue(color.black());
    ui->HueSlider->setValue(color.hueF() * 100);
    ui->SaturationSlider->setValue(color.saturationF() * 100);
    ui->ValueSlider->setValue(color.valueF() * 100);
    UnBlockSliders();
    emit InitialiseAccurate();
}

void MainWindow::on_RedSlider_valueChanged(int value)
{
    color.setRed(value);
    ChangeColor();
    ColorInitialise();
}

void MainWindow::on_BlueSlider_valueChanged(int value)
{
    color.setBlue(value);
    ChangeColor();
    ColorInitialise();
}

void MainWindow::on_GreenSlider_valueChanged(int value)
{
    color.setGreen(value);
    ChangeColor();
    ColorInitialise();
}

void MainWindow::on_CyanSlider_valueChanged(int value)
{
    color.setCmyk(value, color.magenta(), color.yellow(),
                  color.black());
    ChangeColor();
    ColorInitialise();
}

void MainWindow::on_MagentaSlider_valueChanged(int value)
{
    color.setCmyk(color.cyan(), value, color.yellow(),
                  color.black());
    ChangeColor();
    ColorInitialise();
}

void MainWindow::on_YellowSlider_valueChanged(int value)
{
    color.setCmyk(color.cyan(), color.magenta(), value,
                  color.black());
    ChangeColor();
    ColorInitialise();
}

void MainWindow::on_BlackSlider_valueChanged(int value)
{
    color.setCmyk(color.cyan(), color.magenta(), color.yellow(),
                  value);
    ChangeColor();
    ColorInitialise();
}

void MainWindow::on_HueSlider_valueChanged(int value)
{
    color.setHsvF(float(value) / 100, color.saturationF(), color.valueF());
    ChangeColor();
    ColorInitialise();
}

void MainWindow::on_SaturationSlider_valueChanged(int value)
{
    color.setHsvF(color.hueF(), float(value) / 100, color.valueF());
    ChangeColor();
    ColorInitialise();
}

void MainWindow::on_ValueSlider_valueChanged(int value)
{
    color.setHsvF(color.hueF(), color.saturationF(), float(value) / 100);
    ChangeColor();
    ColorInitialise();
}

void MainWindow::on_Palitre_triggered()
{
    color = QColorDialog::getColor();
    ChangeColor();
    ColorInitialise();
}

void MainWindow::ChangingColor()
{
    ColorInitialise();
    ChangeColor();
}

void MainWindow::closeEvent(QCloseEvent * event)
{
    accurate->close();
    QWidget::closeEvent(event);
}

void MainWindow::on_action_2_triggered()
{
    accurate->show();
}
