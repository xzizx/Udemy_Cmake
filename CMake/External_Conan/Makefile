dep:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graphimage.png

pre:
	rmdir /s /q build
	mkdir build 
	cd build && conan install .. & cd ../
	cd build &&	cmake ../ --fresh -G "MinGW Makefiles"
 

