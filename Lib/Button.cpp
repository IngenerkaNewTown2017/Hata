#pragma once


struct Button
{
    const char* adress; ///\brief ����� ��������
    HDC picture; ///\brief ���� ��������
    int x; ///\brief ��������� �
    int y; ///\brief ��������� y
    int x1; ///\brief ��������� �1
    int y1; ///\brief ��������� y1
    int width; ///\brief ������
    int height; ///\brief ������
};

Button exitButton; ///\brief ������ ������
Button saveButton; ///\brief ������ ����������
Button newplanButton; ///\brief ������ ��������
Button loadButton; ///\brief ������ ��������
Button continueButton; ///\brief ������ �����������
Button settingsButton; ///\brief ������ ��������
Button docButton; ///\brief ������ �������� ������������

Button PauseexitButton; ///\brief ������ ������ � �����
Button PausesaveButton; ///\brief ������ ���������� � �����
Button PauseloadButton; ///\brief ������ �������� � �����
Button PausecontinueButton; ///\brief ������ ����������� � �����
Button PausesettingsButton; ///\brief ������ �������� � �����
