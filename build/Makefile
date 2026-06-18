compile-lib-linux:
	gcc -c ../Include/GLAL/cgl.c ../Include/GLAL/glal.c ../Include/GLAL/glad.c 
	@echo "Compiled succesfully"

compile-cofii-linux:
	gcc -c ../Include/Cofii/cofiicore.c ../src/GLAL/glad.c ../src/GLAL/glal.c ../src/GLAL/cgl.c -I ../src

compile-mac:
	clang -c ../Include/GLAL/cgl.c ../Include/GLAL/glal.c ../Include/GLAL/glad.c -I /opt/homebrew/include
	@echo "Compiled succesfully"

compile-cofii:
	gcc -c ../Include/Cofii/cofiicore.c ../Include/GLAL/glad.c ../Include/GLAL/glal.c ../Include/GLAL/cgl.c -I ../Include -I /opt/homebrew/include

