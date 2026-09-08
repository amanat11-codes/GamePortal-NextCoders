# *-* MakeFile *-*

FindTheSum: FindTheSum.o helpers.o gameManager.o utility.o
	gcc FindTheSum.o helpers.o gameManager.o utility.o -o FindTheSum

FindTheSum.o: FindTheSum.c
	gcc -c FindTheSum.c

helpers.o: helpers.c
	gcc -c helpers.c

gameManager.o: gameManager.c
	gcc -c gameManager.c

utility.o: utility.c
	gcc -c utility.c