//Turn off computer screen in windows
#include <windows.h>


int main(void){
    SendMessage((HWND)-1,0x0112,0xF170,2);
    return 0;
}
