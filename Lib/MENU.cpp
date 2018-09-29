#include "TXLib.h"
#include "struct.cpp"

bool checkFocus(int MinX, int MaxX, int MinY, int MaxY);
void checkMenuFocus();
void drawMenu (int screenW, int screenH, HDC fon_menu);
void startWorkspace ();

bool checkFocus(int MinX, int MaxX, int MinY, int MaxY)
{
    if (
        txMouseX() >= MinX && //  iuou iaoiaeony ia eiiiea
        txMouseX() <= MaxX &&
        txMouseY() <= MaxY &&
        txMouseY() >= MinY
        )
    {
        return true;
    }

    return false;
}

void checkMenuFocus()
{
    if (checkFocus(newplanButton.x, newplanButton.y, newplanButton.x1, newplanButton.y1))
    {
        txTextOut(txMouseX(), txMouseY() - 20, "������� ����������?" );
    }

    else if (checkFocus(saveButton.x, saveButton.y, saveButton.x1, saveButton.y1))
    {
        txTextOut(txMouseX(), txMouseY() - 20, "��������� ��� ��?" );
    }

    else if (checkFocus(loadButton.x, loadButton.y, loadButton.x1, loadButton.y1))
    {
        txTextOut(txMouseX(), txMouseY() - 20, "�������� ��� �����?" );
    }

    else if (checkFocus(exitButton.x, exitButton.y, exitButton.x1, exitButton.y1))
    {
        txTextOut(txMouseX(), txMouseY() - 20, "�� �� ���, �� �����" );
    }
}

void drawMenu (int screenW, int screenH, HDC fon_menu)
{
    txSetColor(TX_BLACK);
    txClear();
    Win32::TransparentBlt (txDC(), 0, 0, screenW, screenH, fon_menu, 0, 0, 1950, 1400, -1);
    //txBitBlt (txDC(), 0, 0, screenW, screenH, fon_menu, 0, 0);

    txSelectFont("Harlow Solid Italic", 40);
    txSetColor(TX_WHITE);
    txTextOut(newplanButton.x, newplanButton.y, "����� ����������");
	txTextOut(saveButton.x, saveButton.y, "���������");
	txTextOut(loadButton.x, loadButton.y, "���������");
    txTextOut (exitButton.x, exitButton.y, "�����");
}


void startWorkspace () {     //DODELAT!!!!



}
