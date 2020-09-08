#include "hwlib.hpp"

extern "C" void uart_put_char(char c);
extern "C" void print_asciz(const char * s);
extern "C" void Application();
extern "C" char convert_char(char c);

void uart_put_char( char c ){
   hwlib::cout << c<<" ";
}

int main( void ){	
   
   namespace target = hwlib::target;   
    
   // wait for the PC console to start
   hwlib::wait_ms( 2000 );

   Application();
}
