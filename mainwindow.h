#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sounds.h"
#include "newwindow.h"
#include <QThread>
#include <QMediaPlayer>
#include <QAudioRecorder>
#include <QAudioEncoderSettings>
#include <QDir>
#include <QStringList>
#include <QTime>

#include <QTableWidget>

namespace Ui {
class MainWindow;
}

class Sleeper : public QThread
{
public:
   static void msleep(unsigned long msecs){QThread::msleep(msecs);}
};

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void test() {qDebug() << "test";}

    void keyPressEvent(QKeyEvent *event);

    void keyReleaseEvent(QKeyEvent *event);
    void on_pushButton_C1_pressed();

    void on_pushButton_CS1_pressed();

    void on_pushButton_D1_pressed();

    void on_pushButton_DS1_pressed();

    void on_pushButton_E1_pressed();

    void on_pushButton_F1_pressed();

    void on_pushButton_FS1_pressed();

    void on_pushButton_G1_pressed();

    void on_pushButton_GS1_pressed();

    void on_pushButton_A1_pressed();

    void on_pushButton_AS1_pressed();

    void on_pushButton_B1_pressed();

    void on_pushButton_C2_pressed();

    void on_pushButton_CS2_pressed();

    void on_pushButton_D2_pressed();

    void on_pushButton_DS2_pressed();

    void on_pushButton_E2_pressed();

    void on_pushButton_F2_pressed();

    void on_pushButton_FS2_pressed();

    void on_pushButton_G2_pressed();

    void on_pushButton_GS2_pressed();

    void on_pushButton_A2_pressed();

    void on_pushButton_AS2_pressed();

    void on_pushButton_B2_pressed();

    void on_pushButton_C3_pressed();

    void on_pushButton_CS3_pressed();

    void on_pushButton_D3_pressed();

    void on_pushButton_DS3_pressed();

    void on_pushButton_E3_pressed();

    void on_pushButton_F3_pressed();

    void on_pushButton_FS3_pressed();

    void on_pushButton_G3_pressed();

    void on_pushButton_GS3_pressed();

    void on_pushButton_A3_pressed();

    void on_pushButton_AS3_pressed();

    void on_pushButton_B3_pressed();

    void on_pushButton_C4_pressed();

    void on_pushButton_CS4_pressed();

    void on_pushButton_D4_pressed();

    void on_pushButton_DS4_pressed();

    void on_pushButton_E4_pressed();

    void on_pushButton_F4_pressed();

    void on_pushButton_FS4_pressed();

    void on_pushButton_G4_pressed();

    void on_pushButton_GS4_pressed();

    void on_pushButton_A4_pressed();

    void on_pushButton_AS4_pressed();

    void on_pushButton_B4_pressed();

    void on_pushButton_C5_pressed();

    void on_pushButton_CS5_pressed();

    void on_pushButton_D5_pressed();

    void on_pushButton_DS5_pressed();

    void on_pushButton_E5_pressed();

    void on_pushButton_F5_pressed();

    void on_pushButton_FS5_pressed();

    void on_pushButton_G5_pressed();

    void on_pushButton_GS5_pressed();

    void on_pushButton_A5_pressed();

    void on_pushButton_AS5_pressed();

    void on_pushButton_B5_pressed();

    void on_pushButton_C6_pressed();


    void on_pushButton_Wurlitzer_clicked();


    void on_pushButton_Piano_clicked();


    void on_pushButton_Vibes_clicked();


    void on_pushButton_Rhodes_clicked();


    void on_pushButton_Guitar_pressed();


    void on_pushButton_Glockenspiel_pressed();


    void on_dial_valueChanged(int value);


    void on_pushButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_musicSheets_clicked();
   

    void on_2_clicked();


    void on_3_clicked();


    void on_4_clicked();


    void on_5_clicked();


    void on_6_clicked();


    void on_7_clicked();


    void on_pushButton_Stop_clicked();

    void on_pushButton_Record_clicked();


    void on_pushButton_Play_clicked();

    void on_pushButton_8_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_C1_released();

    void on_pushButton_CS1_released();

    void on_pushButton_D1_released();

    void on_pushButton_DS1_released();

    void on_pushButton_E1_released();

    void on_pushButton_F1_released();

    void on_pushButton_FS1_released();

    void on_pushButton_G1_released();

    void on_pushButton_GS1_released();

    void on_pushButton_A1_released();

    void on_pushButton_AS1_released();

    void on_pushButton_B1_released();

    void on_pushButton_C2_released();

    void on_pushButton_CS2_released();

    void on_pushButton_D2_released();

    void on_pushButton_DS2_released();

    void on_pushButton_E2_released();

    void on_pushButton_F2_released();

    void on_pushButton_FS2_released();

    void on_pushButton_G2_released();

    void on_pushButton_GS2_released();

    void on_pushButton_A2_released();

    void on_pushButton_AS2_released();

    void on_pushButton_B2_released();




    void on_pushButton_C3_released();

    void on_pushButton_CS3_released();

    void on_pushButton_D3_released();

    void on_pushButton_DS3_released();

    void on_pushButton_E3_released();

    void on_pushButton_F3_released();

    void on_pushButton_FS3_released();

    void on_pushButton_G3_released();

    void on_pushButton_GS3_released();

    void on_pushButton_A3_released();

    void on_pushButton_AS3_released();

    void on_pushButton_B3_released();


    void on_pushButton_C4_released();

    void on_pushButton_CS4_released();

    void on_pushButton_D4_released();

    void on_pushButton_DS4_released();

    void on_pushButton_E4_released();

    void on_pushButton_F4_released();

    void on_pushButton_FS4_released();

    void on_pushButton_G4_released();

    void on_pushButton_GS4_released();

    void on_pushButton_A4_released();

    void on_pushButton_AS4_released();

    void on_pushButton_B4_released();


    void on_pushButton_C5_released();

    void on_pushButton_CS5_released();

    void on_pushButton_D5_released();

    void on_pushButton_DS5_released();

    void on_pushButton_E5_released();

    void on_pushButton_F5_released();

    void on_pushButton_FS5_released();

    void on_pushButton_G5_released();

    void on_pushButton_GS5_released();

    void on_pushButton_A5_released();

    void on_pushButton_AS5_released();

    void on_pushButton_B5_released();


    void on_pushButton_C6_released();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();



private:
    Ui::MainWindow *ui;
    Sounds* samples;
    NewWindow* musicSheet;
    QAudioRecorder* recorder;
    QAudioEncoderSettings audioSettings;
    QString recording;
    QMediaPlayer* playRecording;
    QMediaPlayer* players;
    int whichPlayer;
    int volume;
    int speed;
    QTableWidget* tableWidget;
};




























#endif // MAINWINDOW_H
