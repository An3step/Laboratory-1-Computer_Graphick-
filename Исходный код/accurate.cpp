#include "accurate.h"
#include "ui_accurate.h"

Accurate::Accurate(QColor* mwcolor, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Accurate)
{
    ui->setupUi(this);
    this->setWindowTitle("Точный ввод");
    ui->RedS->setRange(0, 255);
    ui->BlueS->setRange(0, 255);
    ui->GreenS->setRange(0, 255);
    ui->CyanS->setRange(0, 255);
    ui->MagentaS->setRange(0, 255);
    ui->YellowS->setRange(0, 255);
    ui->BlackS->setRange(0, 255);
    ui->HueS->setRange(0, 359);
    ui->SaturationS->setRange(0, 255);
    ui->ValueS->setRange(0, 255);
    color = mwcolor;
}

Accurate::~Accurate()
{
    delete ui;
}

void Accurate::BlockTypes()
{
    ui->RedS->blockSignals(true);
    ui->BlueS->blockSignals(true);
    ui->GreenS->blockSignals(true);
    ui->CyanS->blockSignals(true);
    ui->MagentaS->blockSignals(true);
    ui->YellowS->blockSignals(true);
    ui->BlackS->blockSignals(true);
    ui->HueS->blockSignals(true);
    ui->SaturationS->blockSignals(true);
    ui->ValueS->blockSignals(true);
}

void Accurate::UnBlockTypes()
{
    ui->RedS->blockSignals(false);
    ui->BlueS->blockSignals(false);
    ui->GreenS->blockSignals(false);
    ui->CyanS->blockSignals(false);
    ui->MagentaS->blockSignals(false);
    ui->YellowS->blockSignals(false);
    ui->BlackS->blockSignals(false);
    ui->HueS->blockSignals(false);
    ui->SaturationS->blockSignals(false);
    ui->ValueS->blockSignals(false);
}

void Accurate::ColorInitialise()
{
    BlockTypes();
    ui->RedS->setValue(color->red());
    ui->BlueS->setValue(color->blue());
    ui->GreenS->setValue(color->green());
    ui->CyanS->setValue(color->cyan());
    ui->MagentaS->setValue(color->magenta());
    ui->YellowS->setValue(color->yellow());
    ui->BlackS->setValue(color->black());
    ui->HueS->setValue(color->hueF() * 360);
    ui->SaturationS->setValue(color->saturationF() * 255);
    ui->ValueS->setValue(color->valueF() * 255);
    UnBlockTypes();
}

void Accurate::on_RedS_valueChanged(int argument)
{
    color->setRed(argument);
    emit ColorChanging();
}

void Accurate::on_BlueS_valueChanged(int argument)
{
    color->setBlue(argument);
    emit ColorChanging();
}

void Accurate::on_GreenS_valueChanged(int argument)
{
    color->setGreen(argument);
    emit ColorChanging();
}

void Accurate::on_CyanS_valueChanged(int argument)
{
    color->setCmyk(argument, color->magenta(), color->yellow(),
                   color->black());
    emit ColorChanging();
}

void Accurate::on_MagentaS_valueChanged(int argument)
{
    color->setCmyk(color->cyan(), argument, color->yellow(),
                   color->black());
    emit ColorChanging();
}

void Accurate::on_YellowS_valueChanged(int argument)
{
    color->setCmyk(color->cyan(), color->magenta(), argument,
                   color->black());
    emit ColorChanging();
}

void Accurate::on_BlackS_valueChanged(int argument)
{
    color->setCmyk(color->cyan(), color->magenta(), color->yellow(),
                   argument);
    emit ColorChanging();
}

void Accurate::on_HueS_valueChanged(int argument)
{
    color->setHsvF(float(argument) / 359, color->saturationF(),
                   color->valueF());
    emit ColorChanging(1);
}

void Accurate::on_SaturationS_valueChanged(int argument)
{
    color->setHsvF(color->hueF(), float(argument) / 255,
                   color->valueF());
    emit ColorChanging();
}

void Accurate::on_ValueS_valueChanged(int argument)
{
    color->setHsvF(color->hueF(), color->saturationF(),
                   float(argument) / 255);
    emit ColorChanging();
}

void Accurate::InitialiseColors()
{
    ColorInitialise();
}
