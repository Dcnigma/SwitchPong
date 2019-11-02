# Switch Pong
Made in memory of my old Wii Pong game a new version for the Switch.   
![alt text](http://dcnigma.eu5.org/wp-content/uploads/2019/11/icon.png)  
Download here the [Binary build](https://anonfile.com/lbqcJ69cnf/pong_nro) for your switch.  
  
Game Play.  
[Youtube link](https://youtu.be/ZhtjXEUqFrQ) for gameplay.  
   
   
Homebrew Menu:
![alt text](http://dcnigma.eu5.org/wp-content/uploads/2019/11/2019110222161000-B9CA2278025A7707FE11C7E26674FDB9.jpg)

Splash Screen.  
![alt text](http://dcnigma.eu5.org/wp-content/uploads/2019/11/2019110222155900-B9CA2278025A7707FE11C7E26674FDB9.jpg)
Need to dig up the original graphics, but this is the first Game demo I made for a switch.   
( Heavy Modded [source code](https://github.com/I-EAT-CHEEZE-YO/switch_sdl_pong/releases) )  . 
  
Main Menu.  
![alt text](http://dcnigma.eu5.org/wp-content/uploads/2019/11/2019110219535400-691C9B2C6D1F1E032DDC01FD026159FD.jpg)   


If i compile [Past bin error](https://pastebin.com/SuDzfTXN) I-EAT-CHEEZE-YO version I get compile errors.

#Change the Libs:

Most homebrew Switch project that use SDL have broken Makefiles  
Because there where some changes made in the new update of SDL2.  

So you need to edit the Libary in the Makefile   

" LIBS := -lSDL2_mixer -lSDL2 \
-lpng -lz -ljpeg -lglad -lEGL -lglapi -ldrm_nouveau \
-lmikmod -lvorbisidec -logg -lmpg123 -lmodplug -lstdc++ \
-lnx -lm -lfreetype -lbz2 `aarch64-none-elf-pkg-config SDL2_ttf SDL2_image SDL2_gfx --libs SDL2_mixer` "



