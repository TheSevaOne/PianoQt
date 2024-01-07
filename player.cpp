#define BUTTON "background-color: purple"
#define SUB_BUTTON "background-color:qlineargradient(spread:pad, x1:0.664709, y1:0.705, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 purple)"
#include "mainwindow.h"
#include "newwindow.h"
#include "ui_mainwindow.h"
#include "sounds.h"
#include "mainwindow.h"
#include <QKeyEvent>
#include <QTimer>
void MainWindow::on_pushButton_C1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QUrl(samples->files[0]));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_C1->setStyleSheet(BUTTON);


}

void MainWindow::on_pushButton_CS1_pressed()
{

    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QUrl( samples->files[1]));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_CS1->setStyleSheet(SUB_BUTTON);


}

void MainWindow::on_pushButton_D1_pressed()
{

    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QUrl( samples->files[2]));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_D1->setStyleSheet(BUTTON);



}

void MainWindow::on_pushButton_DS1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QUrl( samples->files[3]));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_DS1->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_E1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QUrl( samples->files[4]));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_E1->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_F1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[5])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_F1->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_FS1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[6])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_FS1->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_G1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[7])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_G1->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_GS1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QUrl( samples->files[8]));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_GS1->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_A1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QUrl( samples->files[9]));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_A1->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_AS1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[10])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_AS1->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_B1_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[11])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();

    ui->pushButton_B1->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_C2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[12])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_C2->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_CS2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[13])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_CS2->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_D2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[14])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_D2->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_DS2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[15])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_DS2->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_E2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[16])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_E2->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_F2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[17])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_F2->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_FS2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[18])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_FS2->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_G2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[19])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_G2->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_GS2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[20])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_GS2->setStyleSheet(SUB_BUTTON);

}

void MainWindow::on_pushButton_A2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[21])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_A2->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_AS2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[22])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_AS2->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_B2_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[23])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_B2->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_C3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[24])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_C3->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_CS3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[25])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_CS3->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_D3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[26])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();;
    ui->pushButton_D3->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_DS3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[27])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_DS3->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_E3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[28])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_E3->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_F3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[29])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();;
    ui->pushButton_F3->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_FS3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[30])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_FS3->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_G3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[31])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_G3->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_GS3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[32])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_GS3->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_A3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[33])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_A3->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_AS3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[34])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_AS3->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_B3_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[35])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_B3->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_C4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[36])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_C4->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_CS4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[37])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_CS4->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_D4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[38])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_D4->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_DS4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[39])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_DS4->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_E4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[40])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_E4->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_F4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[41])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_F4->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_FS4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[42])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_FS4->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_G4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[43])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_G4->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_GS4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[44])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_GS4->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_A4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[45])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_A4->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_AS4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[46])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_AS4->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_B4_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[47])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_B4->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_C5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[48])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_C5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_CS5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[49])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_CS5->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_D5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[50])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_D5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_DS5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[51])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_DS5->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_E5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[52])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_E5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_F5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[53])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_F5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_FS5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[54])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_FS5->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_G5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[55])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_G5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_GS5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[56])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_GS5->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_A5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[57])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_A5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_AS5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[58])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
     ui->pushButton_AS5->setStyleSheet(SUB_BUTTON);
}

void MainWindow::on_pushButton_B5_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QMediaContent(QUrl( samples->files[59])));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_B5->setStyleSheet(BUTTON);
}

void MainWindow::on_pushButton_C6_pressed()
{
    whichPlayer = (whichPlayer + 1) % 20;
    players[whichPlayer].setMedia(QUrl(samples->files[60]));
    players[whichPlayer].setVolume(volume);
    players[whichPlayer].play();
    ui->pushButton_C6->setStyleSheet(BUTTON);
}
