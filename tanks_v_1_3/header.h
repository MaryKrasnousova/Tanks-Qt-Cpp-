#ifndef HEADER_H
#define HEADER_H

#define WIDTH 400       //������ �������� ����
#define HEIGHT 500      //������ �������� ����

#define MAXROW 20       //�������� ����� � ������� ��������
#define MAXCOL 25       //�������� ��������� � ������� ��������

#define SIZE_X 20       //������������ ������ �������� �� ��� �
#define SIZE_Y 20       //������������ ������ �������� �� ��� �

#define SIZE_BULLET_X 5 //������� ����
#define SIZE_BULLET_Y 5

#define NORTH 0         //�����������: �����
#define EAST 90         //�����������: ������
#define SOUTH 180       //�����������: ��
#define WEST 270        //�����������: �����

#define RESPAWN_BONUS_X 360//� - ���������� ������
#define RESPAWN_BONUS_Y 460//� - ���������� ������

#define SHELL_DAMMAGE 30 //�����������, ��������� ��������
#define BOMB_DAMMAGE 100 //�����������, ��������� ������

enum CellType           //��� ������ ����
{
    cNone,              //
    cAsph,              //������� (�������� - 150%)
    cDotG,              //��������������� �� (�����) (������ ��������, ����� ��������)
    cDotA,              //��������������� �� (�������) (������ ��������, ����� ��������)
    cSand,              //�����  (�������� - 50%)
    cSwamp,             //������ (���� �����)
    cGrass,             //�����  (�������� - 100%)
    cWall,              //�����  (������ ��������, ����� ��������� 2 ��������)
    cWallD,             //����������� ����� (������ ��������, ����� ��������� 1 �������)
    cWater,             //����   (���� �����)
    cHouse,             //���    (������ ��������/���������)
    cForest,            //���    (������ ��������, ����� ���������� (������ ���������))
    cTank               //����
};

enum Side               //������� ���������
{
    None,
    Sovok,              //����
    Dodik               //������ ����
};

enum BonusType          //��� ������
{
    Live,               //�����
    Repair,             //������
    Ammo                //����������
};

#endif // HEADER_H
