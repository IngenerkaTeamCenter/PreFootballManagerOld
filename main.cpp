#include <iostream>
#include "TXLib.h"
using namespace std;


int main()
    {

    char str[20];
    txCreateWindow(800, 500);
    cout << "Ведите цифру\n" << endl;
    cin >> str;

    HDC background_FromTXLibHelp;

    if (strcmp(str, "1") == 0) {

    background_FromTXLibHelp = txLoadImage ("1.bmp");
           txBitBlt(txDC(), 0, 0, 800, 500, background_FromTXLibHelp, 0, 0);

              txSetFillColour(TX_RED);
          txSetColour(TX_RED);
           txCircle(50, 250 , 20);
              txSetFillColour(TX_RED);
          txSetColour(TX_RED);
           txCircle(300, 225 , 20);
              txSetFillColour(TX_RED);
          txSetColour(TX_RED);
           txCircle(300, 275 , 20);
              txSetFillColour(TX_RED);
          txSetColour(TX_RED);
           txCircle(200, 285 , 20);
              txSetFillColour(TX_RED);
          txSetColour(TX_RED);
           txCircle(200, 215 , 20);
              txSetFillColour(TX_RED);
          txSetColour(TX_RED);
           txCircle(250, 70, 20);
              txSetFillColour(TX_RED);
          txSetColour(TX_RED);
           txCircle(250, 430, 20);
              txSetFillColour(TX_RED);
          txSetColour(TX_RED);
           txCircle(150, 120, 20);
            txSetFillColour(TX_RED);
          txSetColour(TX_RED);
           txCircle(150, 380, 20);
            txSetFillColour(TX_RED);
          txSetColour(TX_RED);
           txCircle(350, 150, 20);
            txSetFillColour(TX_RED);
          txSetColour(TX_RED);
           txCircle(350, 350, 20);
            txSetFillColour(TX_WHITE);
          txSetColour(TX_WHITE);
           txSelectFont ("Comic Sans MS", 32);
              txDrawText(310, 100, 610, 50, "BAYERN MUNCHEN");
        txDeleteDC (background_FromTXLibHelp);
    }

     else if (strcmp(str, "2") == 0) {
background_FromTXLibHelp = txLoadImage ("1.bmp");
txBitBlt(txDC(), 0, 0, 800, 500, background_FromTXLibHelp, 0, 0);

              txSetFillColour(TX_YELLOW);
          txSetColour(TX_YELLOW);
           txCircle(50, 250 , 20);
              txSetFillColour(TX_YELLOW);
          txSetColour(TX_YELLOW);
           txCircle(300, 225 , 20);
              txSetFillColour(TX_YELLOW);
          txSetColour(TX_YELLOW);
           txCircle(300, 275 , 20);
              txSetFillColour(TX_YELLOW);
          txSetColour(TX_YELLOW);
           txCircle(200, 285 , 20);
              txSetFillColour(TX_YELLOW);
          txSetColour(TX_YELLOW);
           txCircle(200, 215 , 20);
              txSetFillColour(TX_YELLOW);
          txSetColour(TX_YELLOW);
           txCircle(250, 70, 20);
              txSetFillColour(TX_YELLOW);
          txSetColour(TX_YELLOW);
           txCircle(250, 430, 20);
              txSetFillColour(TX_YELLOW);
          txSetColour(TX_YELLOW);
           txCircle(150, 120, 20);
            txSetFillColour(TX_YELLOW);
          txSetColour(TX_YELLOW);
           txCircle(150, 380, 20);
            txSetFillColour(TX_YELLOW);
          txSetColour(TX_YELLOW);
           txCircle(350, 150, 20);
            txSetFillColour(TX_YELLOW);
          txSetColour(TX_YELLOW);
           txCircle(350, 350, 20);
            txSetFillColour(TX_WHITE);
          txSetColour(TX_WHITE);
           txSelectFont ("Comic Sans MS", 32);
              txDrawText(310, 100, 610, 50, "BOR.DORTMUND");
        txDeleteDC (background_FromTXLibHelp);


    } else if (strcmp(str, "2") == 0) {

    background_FromTXLibHelp = txLoadImage ("1.bmp");
           txBitBlt(txDC(), 0, 0, 800, 500, background_FromTXLibHelp, 0, 0);

        txDeleteDC (background_FromTXLibHelp);

    }

    return 0;

    }
