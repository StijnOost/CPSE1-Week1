#include "hwlib.hpp"

extern "C" void uart_put_char(char c);
extern "C" void print_asciz(const char * s);
extern "C" void Application();
extern "C" char convert_char(char c);

char convert_char(char c){
	if(c>=65&&c<=90)
		c=c+32;
	else if(c>=97&&c<=122)
		c=c-32;
	return c;
}

void uart_put_char( char c ){
   hwlib::cout << c;
}

int main( void ){	
   
   namespace target = hwlib::target;   
    
   // wait for the PC console to start
   hwlib::wait_ms( 2000 );

   Application();
}