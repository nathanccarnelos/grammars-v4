/*
Func call with various arg numbers.
And func forward declarations.
And func call as func call argument.
*/

vazio aX(vazio);
inteiro a1(inteiro param1);
inteiro a2(inteiro param1, param2);
vazio a3();
vazio a3(vazio);

inteiro f(inteiro arg1, char arg2)
{
	a1(arg1);
	a2(arg1, arg2);
	a3();
	a1(a1());
	a1(a1(), a2(a1(), x1));
}


