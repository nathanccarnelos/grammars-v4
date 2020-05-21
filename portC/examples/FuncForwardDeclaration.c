/*
Func call with various arg numbers.
And func forward declarations.
*/

vazio aX(vazio);
inteiro a1(inteiro param1);
inteiro a2(inteiro param1, param2);
vazio a3();
vazio a3(vazio);

inteiro f(inteiro arg1, caracter arg2)
{
	a1(arg1);
	a2(arg1, arg2);
	a3();
}


