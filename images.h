/* AmiWeatherForecasts icons */
#define ICONWIDTH   25

/*
Colors:
'*': text
' ': background
'+': sun
'-': cloud
'=': light cloud
'#': dark cloud
*/

char images[240][ICONWIDTH]=
{
    // clear sky
   
    "   **     ***     **    ",
    "     ** **+++** **      ",
    "        *+++++*         ",
    "       *+++++++*        ",
    "  **** *+++++++* ****   ",
    "       *+++++++*        ",
    "        *+++++*         ",
    "        **+++**         ",
    "     **   ***   **      ",
    "   **             **    ",
    
    // few clouds
   
    "       *+     ***     +*",
    "         *+ **+++** +*  ",
    "            *+++++*     ",
    "        ****+++++++*    ",
    "      **===**++++++*  +*",
    "     *=======***+++*    ",
    "    *======**===***     ",
    "  **======**=====***    ",
    " *========*=========*   ",
    " *********************  ",
    
    // scattered clouds
    
    "                        ",
    "     *****              ",
    "   **=====** ******     ",
    "  *=========**=====**   ",
    "  *=========*========*  ",
    "  *========*=========*  ",
    "   **====*****====****  ",
    "     ****     ****      ",    
    "                        ",    
    "                        ",
    
    // broken clouds
    
    "                        ",
    "     *****              ",
    "   **-----** ******     ",
    "  *---------**-----**   ",
    "  *---------*--------*  ",
    "  *--------*---------*  ",
    "   **----*****----****  ",
    "     ****     ****      ",    
    "                        ",
    "                        ",
    
    // shower rain
    
    "     *****              ",
    "   **-----** ******     ",
    "  *---------**-----**   ",
    "  *---------*--------*  ",
    "  *--------*---------*  ",
    "   **----*****----****  ",
    "     ****     ****      ",   
    "          *        *    ",    
    "     *   *    *   *     ",
    "    *   *    *   *      ",
    
    // rain


    "     *****              ",
    "   **=====** ******     ",
    "  *=========**=====**   ",
    "  *=========*========*  ",
    "  *========*=========*  ",
    "   **====*****====****  ",
    "     ****     ****      ",     
    "          *        *    ",    
    "     *   *    *   *     ",
    "    *   *    *   *      ",

    // thunderstorm
    
    "     *****              ",
    "   **#####** ******     ",
    "  *#########**#####**   ",
    "  *#########*########*  ",
    "  *########*#########*  ",
    "   **####*****####****  ",
    "                        ",    
    "       ****-     ****-  ",    
    "         **-       **-  ",
    "        *-         *-   ",
    
    // snow
    
    "     *****              ",
    "   **-----** ******     ",
    "  *---------**-----**   ",
    "  *---------*--------*  ",
    "  *--------*---------*  ",
    "   **----*****----****  ",
    "     ****     ****      ",    
    "   *    *    *     *    ",
    "      *    *    *       ",
    "   *    *    *     *    ",
       
    // mist
    
    "     *****              ",
    "   **=====** ******     ",
    "  *=========**=====**   ",
    "   *********  *****     ", 
    "                        ",
    "   ****   ****   ****   ",   
    "                        ",    
    "      ****  ****  ****  ",    
    "                        ",
    "   ****   ****   ****   ",
    
    // unknown - default
    
    "                        ",
    "                        ",
    "                        ",
    "                        ",
    "                        ",
    "                        ",
    "                        ",
    "                        ",
    "                        ",
    "                        "

};
