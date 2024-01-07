#define BUTTON  "background-color: rgb(225, 225, 225)"
#define SUB_BUTTON "background-color:qlineargradient(spread:pad, x1:0.664709, y1:0.705, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(110, 110, 110, 255));"
#define LABEL "QLabel { color : white; }"
#include "mainwindow.h"
#include "newwindow.h"
#include "ui_mainwindow.h"
#include "sounds.h"
#include <iostream>
#include <QString>
#include <QtGui>
#include <QTableView>
#include <QTableWidget>
#include <QTimer>
#include <QtGui>
#include <QTableWidgetItem>
#include <QAbstractTableModel>
#include <QMenu>
#include <QAction>
#include <QtWidgets>
#include <QBoxLayout>


 QStandardItemModel * createModel(QObject* parent)
{
    const int numRows = 5;
    const int numColumns = 5;

    QStandardItemModel* model = new QStandardItemModel(numRows, numColumns);
    for (int row = 0; row < numRows; ++row)
    {
        for (int column = 0; column < numColumns; ++column)
        {
            QString text = QString();
            QStandardItem* item = new QStandardItem(text);
            model->setItem(row, column, item);

        }
     }

    return model;
}

 QVariant data(const QModelIndex& index, int role = Qt::DisplayRole)
     {
         if (!index.isValid() || role != Qt::DisplayRole)
             return QVariant();


       //   return m_data[index.row() * m_numColumns + index.column()];

}

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

ui->setupUi(this);
ui->widget_5->sizePolicy();

ui->pushButton_5->setStyleSheet("QPushButton { width:60px; height:60px; border-radius: 20px;image: url(:/icons/rec.png)}");

ui->pushButton_6->setStyleSheet("QPushButton { width:40px; height:40px; border-radius: 20px;image: url(:/icons/pause.png)}");

QTableView * table=ui->tableView;

 ui-> tableView ->setModel(createModel(table));
 QMenu * Theme = menuBar()->addMenu("Тема");
 QAction * SP = new QAction(tr("Справка"),this);
 menuBar()->addAction(SP);
 connect(SP, SIGNAL(triggered(bool)), this, SLOT(on_pushButton_musicSheets_clicked()));
 QAction *red = new QAction(tr("Серый"), this);
 Theme->addAction(red);
connect(red, SIGNAL(triggered(bool)), this, SLOT(on_2_clicked()));
QAction *green = new QAction(tr("Зеленый"), this);
Theme->addAction(green);
connect(green, SIGNAL(triggered(bool)), this, SLOT(on_4_clicked()));
QAction *blue = new QAction(tr("Голубой"), this);
Theme->addAction(blue);
connect(blue, SIGNAL(triggered(bool)), this, SLOT(on_7_clicked()));
QAction *orange = new QAction(tr("Оранжевый"), this);
Theme->addAction(orange);
connect(orange, SIGNAL(triggered(bool)), this, SLOT(on_6_clicked()));
QAction *yellow = new QAction(tr("Желтый"), this);
Theme->addAction(yellow);
connect(yellow, SIGNAL(triggered(bool)), this, SLOT(on_5_clicked()));
QAction *black = new QAction(tr("Черный"), this);
Theme->addAction(black);
connect(black, SIGNAL(triggered(bool)), this, SLOT(on_3_clicked()));

//ui->groupBox->setTitle("Инструменты");
ui->groupBox->setStyleSheet("QGroupBox::title {""color:white}");

setStyleSheet("QMainWindow {background: 'black';}");

    volume = 50;
    speed = 0;
    samples = new Sounds;
    musicSheet = new NewWindow;
    recorder = new QAudioRecorder(this);
    playRecording = new QMediaPlayer;
    audioSettings.setCodec("audio/amr");
    audioSettings.setQuality(QMultimedia::HighQuality);
    recorder->setEncodingSettings(audioSettings);
    recorder->setAudioInput("Built-In Input");
    players = new QMediaPlayer[20];
    whichPlayer = 0;
    ui->horizontalSlider->setRange(0, 600);
    QVariant getData;


ui->label_4->setStyleSheet(LABEL);

ui->label_3->setStyleSheet(LABEL);

}



void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    qDebug() << value;
    speed = value*10;
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Wurlitzer_clicked()
{
    samples->setSound(1);
}

void MainWindow::on_pushButton_Vibes_clicked()
{
    samples->setSound(2);
}

void MainWindow::on_pushButton_Piano_clicked()
{
    volume = volume + 50;
    samples->setSound(3);
}

void MainWindow::on_pushButton_Rhodes_clicked()
{
    samples->setSound(4);
}

void MainWindow::on_pushButton_Guitar_pressed()
{
    samples->setSound(5);
}

void MainWindow::on_pushButton_Glockenspiel_pressed()
{
    samples->setSound(6);
}

void MainWindow::on_dial_valueChanged(int value)
{
    volume = value;
}



void MainWindow::on_pushButton_musicSheets_clicked()
{
    musicSheet->show();
}

void MainWindow::on_pushButton_8_clicked()
{
QTableView * table=ui->tableView;
QVariant getData;
QModelIndex myIndex;
    for (int  i=0; i < table->model()->rowCount();++i) {
        for (int j=0;j< table->model()->columnCount();j++)
        {
                    table->setCurrentIndex(  table->model()->index(i,j,myIndex));
                    Sleeper::msleep(speed);
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="C1")
                    {MainWindow::on_pushButton_C1_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="CS1")
                        {MainWindow::on_pushButton_CS1_pressed();}
                     if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="D1")
                           {MainWindow::on_pushButton_D1_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="DS1")
                           {MainWindow::on_pushButton_DS1_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="E1")
                           {MainWindow::on_pushButton_E1_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="F1")
                           {MainWindow::on_pushButton_F1_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="FS1")
                           {MainWindow::on_pushButton_FS1_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="G1")
                           {MainWindow::on_pushButton_G1_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="GS1")
                           {MainWindow::on_pushButton_GS1_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="A1")
                           {MainWindow::on_pushButton_A1_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="AS1")
                           {MainWindow::on_pushButton_AS1_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="B1")
                           {MainWindow::on_pushButton_B1_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="C2")
                           {MainWindow::on_pushButton_C2_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="CS2")
                           {MainWindow::on_pushButton_CS2_pressed();}
                     if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="D2")
                           {MainWindow::on_pushButton_D2_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="DS2")
                           {MainWindow::on_pushButton_DS2_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="E2")
                           {MainWindow::on_pushButton_E2_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="F2")
                           {MainWindow::on_pushButton_F2_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="FS2")
                           {MainWindow::on_pushButton_FS2_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="G2")
                           {MainWindow::on_pushButton_G2_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="GS2")
                           {MainWindow::on_pushButton_GS2_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="A2")
                           {MainWindow::on_pushButton_A2_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="AS2")
                           {MainWindow::on_pushButton_AS2_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="B2")
                           {MainWindow::on_pushButton_B2_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="C3")
                           {MainWindow::on_pushButton_C3_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="CS3")
                           {MainWindow::on_pushButton_CS3_pressed();}
                     if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="D3")
                           {MainWindow::on_pushButton_D3_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="DS3")
                           {MainWindow::on_pushButton_DS3_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="E3")
                           {MainWindow::on_pushButton_E3_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="F3")
                           {MainWindow::on_pushButton_F3_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="FS3")
                           {MainWindow::on_pushButton_FS3_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="G3")
                           {MainWindow::on_pushButton_G3_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="GS3")
                           {MainWindow::on_pushButton_GS3_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="A3")
                           {MainWindow::on_pushButton_A3_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="AS3")
                           {MainWindow::on_pushButton_AS3_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="B3")
                           {MainWindow::on_pushButton_B3_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="C4")
                           {MainWindow::on_pushButton_C4_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="CS4")
                           {MainWindow::on_pushButton_CS4_pressed();}
                     if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="D4")
                           {MainWindow::on_pushButton_D4_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="DS4")
                           {MainWindow::on_pushButton_DS4_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="E4")
                           {MainWindow::on_pushButton_E4_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="F4")
                           {MainWindow::on_pushButton_F4_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="FS4")
                           {MainWindow::on_pushButton_FS4_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="G4")
                           {MainWindow::on_pushButton_G4_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="GS4")
                           {MainWindow::on_pushButton_GS4_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="A4")
                           {MainWindow::on_pushButton_A4_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="AS4")
                           {MainWindow::on_pushButton_AS4_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="B4")
                           {MainWindow::on_pushButton_B4_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="C5")
                           {MainWindow::on_pushButton_C5_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="CS5")
                           {MainWindow::on_pushButton_CS5_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="D5")
                           {MainWindow::on_pushButton_D5_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="DS5")
                           {MainWindow::on_pushButton_DS5_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="E5")
                           {MainWindow::on_pushButton_E5_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="F5")
                           {MainWindow::on_pushButton_F5_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="FS5")
                           {MainWindow::on_pushButton_FS5_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="G5")
                           {MainWindow::on_pushButton_G5_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="GS5")
                           {MainWindow::on_pushButton_GS5_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="A5")
                           {MainWindow::on_pushButton_A5_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="AS5")
                           {MainWindow::on_pushButton_AS5_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="B5")
                           {MainWindow::on_pushButton_B5_pressed();}
                    if(table->model()->data( table->model()->index(i,j,myIndex)).toString()=="C6")
                           {MainWindow::on_pushButton_C6_pressed();}
                        }
                    Sleeper::msleep(500);

     }
}



void MainWindow::on_tableView_clicked(const QModelIndex &index)
{

}


void MainWindow::on_pushButton_C1_released()
{
    ui->pushButton_C1->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_CS1_released()
{
   ui->pushButton_CS1->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_D1_released()
{
   ui->pushButton_D1->setStyleSheet(BUTTON);
}




void MainWindow::on_pushButton_DS1_released()
{
    ui->pushButton_DS1->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_E1_released()
{
    ui->pushButton_E1->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_F1_released()
{
    ui->pushButton_F1->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_FS1_released()
{
    ui->pushButton_FS1->setStyleSheet(SUB_BUTTON);
}


void MainWindow::on_pushButton_G1_released()
{
     ui->pushButton_G1->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_GS1_released()
{
    ui->pushButton_GS1->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_A1_released()
{

    ui->pushButton_A1->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_AS1_released()
{
   ui->pushButton_AS1->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_B1_released()
{
   ui->pushButton_B1->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_C2_released()
{
    ui->pushButton_C2->setStyleSheet(BUTTON);
}


void MainWindow::on_pushButton_CS2_released()
{
   ui->pushButton_CS2->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_D2_released()
{
   ui->pushButton_D2->setStyleSheet(BUTTON);
}


void MainWindow::on_pushButton_DS2_released()
{
    ui->pushButton_DS2->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_E2_released()
{
    ui->pushButton_E2->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_F2_released()
{
    ui->pushButton_F2->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_FS2_released()
{
    ui->pushButton_FS2->setStyleSheet(SUB_BUTTON);
}


void MainWindow::on_pushButton_G2_released()
{
     ui->pushButton_G2->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_GS2_released()
{
    ui->pushButton_GS2->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_A2_released()
{

    ui->pushButton_A2->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_AS2_released()
{
     ui->pushButton_AS2->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_B2_released()
{
   ui->pushButton_B2->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_C3_released()
{
      ui->pushButton_C3->setStyleSheet(BUTTON);
}


void MainWindow::on_pushButton_CS3_released()
{
   ui->pushButton_CS3->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_D3_released()
{
      ui->pushButton_D3->setStyleSheet(BUTTON);
}


void MainWindow::on_pushButton_DS3_released()
{
    ui->pushButton_DS3->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_E3_released()
{
    ui->pushButton_E3->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_F3_released()
{
    ui->pushButton_F3->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_FS3_released()
{
    ui->pushButton_FS3->setStyleSheet(SUB_BUTTON);
}


void MainWindow::on_pushButton_G3_released()
{
     ui->pushButton_G3->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_GS3_released()
{
    ui->pushButton_GS3->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_A3_released()
{

    ui->pushButton_A3->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_AS3_released()
{
     ui->pushButton_AS3->setStyleSheet(SUB_BUTTON);
}



void MainWindow::on_pushButton_B3_released()
{
   ui->pushButton_B3->setStyleSheet(BUTTON);
}


void MainWindow::on_pushButton_C4_released()
{
      ui->pushButton_C4->setStyleSheet(BUTTON);


}


void MainWindow::on_pushButton_CS4_released()
{
   ui->pushButton_CS4->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_D4_released()
{
      ui->pushButton_D4->setStyleSheet(BUTTON);
}




void MainWindow::on_pushButton_DS4_released()
{
    ui->pushButton_DS4->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_E4_released()
{
    ui->pushButton_E4->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_F4_released()
{
    ui->pushButton_F4->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_FS4_released()
{
    ui->pushButton_FS4->setStyleSheet(SUB_BUTTON);
}


void MainWindow::on_pushButton_G4_released()
{
     ui->pushButton_G4->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_GS4_released()
{
    ui->pushButton_GS4->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_A4_released()
{

    ui->pushButton_A4->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_AS4_released()
{
     ui->pushButton_AS4->setStyleSheet(SUB_BUTTON);
}



void MainWindow::on_pushButton_B4_released()
{
   ui->pushButton_B4->setStyleSheet(BUTTON);
}


void MainWindow::on_pushButton_C5_released()
{
      ui->pushButton_C5->setStyleSheet(BUTTON);


}


void MainWindow::on_pushButton_CS5_released()
{
   ui->pushButton_CS5->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_D5_released()
{
      ui->pushButton_D5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_DS5_released()
{
    ui->pushButton_DS5->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_E5_released()
{
    ui->pushButton_E5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_F5_released()
{
    ui->pushButton_F5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_FS5_released()
{
    ui->pushButton_FS5->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_G5_released()
{
     ui->pushButton_G5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_GS5_released()
{
    ui->pushButton_GS5->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_A5_released()
{

    ui->pushButton_A5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_AS5_released()
{
     ui->pushButton_AS5->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_B5_released()
{
   ui->pushButton_B5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_C6_released()
{
   ui->pushButton_C6->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_clicked()
{

 ui->tableView->model()->insertRow(1);



}

void MainWindow::on_pushButton_2_clicked()
{

    ui->tableView->model()->removeRow(1) ;
}

void MainWindow::on_pushButton_4_clicked()
{

    ui->tableView->model()->insertColumn(1);

}

void MainWindow::on_pushButton_3_clicked()
{
    ui->tableView->model()->removeColumn(1);
}

void MainWindow::on_pushButton_5_clicked()
{
  ui->pushButton_5->setStyleSheet("QPushButton { width:50px; height:50px; border-radius: 20px;image: url(:/icons/recon.png)}");
  ui->pushButton_6->setStyleSheet("QPushButton { width:50px; height:50px; border-radius: 20px;image: url(:/icons/off.png)}");
  on_pushButton_Record_clicked();
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->pushButton_5->setStyleSheet("QPushButton { width:50px; height:50px; border-radius: 20px;image: url(:/icons/rec.png)}");
    ui->pushButton_6->setStyleSheet("QPushButton { width:50px; height:50px; border-radius: 20px;image: url(:/icons/pause.png)}");
    on_pushButton_Stop_clicked();
}




