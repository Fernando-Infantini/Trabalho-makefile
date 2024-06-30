demo:
	echo "O Makefile esta funcionando"

imc:
	gcc IMC.c -o IMC.out
	./IMC.out

imcl:
	locate -i IMC.c

analise:
	cat IMC.c

pingl:
	ping -c 5 localhost

pingg:
	ping -c 5 google.com
