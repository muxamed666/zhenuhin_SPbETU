

//������ 10

//��� �������� ������ � ������ �� 6 ������ ������������ 
//������ ������ 3�3 ��������� ��� char 
//� ������ char (�������� 1 ����) ��������� ����� �����
//�������� 0 - �����, 1 - �����, 2 - ������� � �.�.
//��� ������������� ������ ������ - ���������� �������� ������� �������������� ������

struct RubikCube
{
	unsigned char top[3][3];
	unsigned char front[3][3];
	unsigned char left[3][3];
	unsigned char right[3][3];
	unsigned char bottom[3][3];
	unsigned char back[3][3];
};

RubikCube instance;