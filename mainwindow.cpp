#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <TrenPrimera.h>
#include <TrenSegunda.h>
#include <TrenTercera.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->primerRadioButton->setChecked(true);
    agencia.insertarTrenes(new TrenPrimera("234",5));
    agencia.getTrenPosition(0)->setTramo(new Tramo("Mayari","Guisa",34,45));
       agencia.getTrenPosition(0)->agregarPasajero(new Pasajero("Migue","232323",true,23));
       agencia.getTrenPosition(0)->agregarPasajero(new Pasajero("Antonio","2232323",false,2));
       agencia.getTrenPosition(0)->agregarPasajero(new Pasajero("Julio","2324323",false,23));
       agencia.getTrenPosition(0)->agregarPasajero(new Pasajero("Marcos","2332323",true,2));
       agencia.getTrenPosition(0)->agregarPasajero(new Pasajero("Lola","2323523",true,23));

       agencia.insertarTrenes(new TrenSegunda("235",5));
       agencia.getTrenPosition(1)->setTramo(new Tramo("Mayari","Guisa",34,45));
      // agencia.getTrenPosition(1)->agregarPasajero(new Pasajero("Miguel","223",true,23));
    /*   agencia.getTrenPosition(1)->agregarPasajero(new Pasajero("Miguel","232323",true,23));
       agencia.getTrenPosition(1)->agregarPasajero(new Pasajero("Miguel","232323",true,23));
       agencia.getTrenPosition(1)->agregarPasajero(new Pasajero("Miguel","232323",true,23));
       agencia.getTrenPosition(1)->agregarPasajero(new Pasajero("Miguel","232323",true,23));
*/

    agencia.insertarTrenes(new TrenSegunda("236",5));

    agencia.getTrenPosition(2)->setTramo(new Tramo("Bayamo","Guisa",34,45));
  /*  agencia.getTrenPosition(2)->agregarPasajero(new Pasajero("Miguel","232323",true,23));
    agencia.getTrenPosition(2)->agregarPasajero(new Pasajero("Miguel","232323",true,23));
    agencia.getTrenPosition(2)->agregarPasajero(new Pasajero("Miguel","232323",true,23));
    agencia.getTrenPosition(2)->agregarPasajero(new Pasajero("Miguel","232323",true,23));
    agencia.getTrenPosition(2)->agregarPasajero(new Pasajero("Miguel","232323",true,23));
*/

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    if(ui->primerRadioButton->isChecked()){
        tren=new TrenPrimera(ui->numeroTrenLine->text(),
                             ui->diaTrenLine->text().toInt());
        agencia.insertarTrenes(tren);
        ui->estado->setText("Agregado correctamente");
    }
    if(ui->segundaRadioButton->isChecked()){
        tren=new TrenSegunda(ui->numeroTrenLine->text(),
                             ui->diaTrenLine->text().toInt());
        agencia.insertarTrenes(tren);
        ui->estado->setText("Agregado correctamente");
    }
   else{
        tren=new TrenTercera(ui->numeroTrenLine->text(),
                             ui->diaTrenLine->text().toInt());
        agencia.insertarTrenes(tren);
        ui->estado->setText("Agregado correctamente");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    tramo=new Tramo(ui->origenTramoLine->text(),
                    ui->destinoTramoLine->text(),
                    ui->precioTramoLine->text().toFloat(),
                    ui->distanciTramoLine->text().toFloat()
                  );
    tren->setTramo(tramo);
    ui->estado_2->setText("Agregado correctamente");
}


void MainWindow::on_pushButton_clicked()
{
    pasajero=new Pasajero(ui->nombrePasajeroLine->text(),
                          ui->ciPasajeroLine->text(),
                          ui->checkNacional->isChecked(),
                          ui->edadPasajeroLine->text().toInt());
    tren->agregarPasajero(pasajero);
    ui->estado_3->setText("Agregado correctamente");
}



void MainWindow::on_pushButton_4_clicked()
{
    QString a="";
    a.setNum(agencia.totalPersonasTramo(ui->origenMLine->text(),
                                                  ui->destinoMLIne->text()));
    ui->cantidadTramoL->setText(a);
}


void MainWindow::on_pushButton_5_clicked()
{
    QString a="";
    a.setNum(agencia.turistasDia(ui->diaLineM->text().toInt()));
    ui->turistasDia->setText(a);
}


void MainWindow::on_pushButton_6_clicked()
{
    QString a="";
    a.setNum(agencia.cantidadRecaudadaDia(ui->lineDia2M->text().toInt()));
    ui->recaudadoDia->setText(a);
}


void MainWindow::on_pushButton_8_clicked()
{

    ui->mayorRecaudacionTren->setText(agencia.getTrenPosition(agencia.posTrenMasRecaudo())->getN0());

}


void MainWindow::on_pushButton_7_clicked()
{
    ui->trenDisponible->setText(agencia.getTrenPosition(agencia.posTrenConCapacidad())->getN0());
}


void MainWindow::on_pushButton_9_clicked()
{
    QString a;
    a.setNum(agencia.cuantosAdultosViajaron());
    ui->cantidadAdultos->setText(a);
}





void MainWindow::on_pushButton_10_clicked()
{

    QString a;
    a.setNum(agencia.cuantosNinosViajaron());
    ui->cantidadNinos->setText(a);
}

