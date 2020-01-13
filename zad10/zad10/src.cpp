

//задача 10

//для храниния данных о каждой из 6 сторон использовать 
//массив клеток 3х3 используя тип char 
//в каждый char (размером 1 байт) сохранять номер цвета
//например 0 - белый, 1 - синий, 2 - красный и т.д.
//для трансформаций такого кубика - циклически сдвигать массивы соответсвующих сторон

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