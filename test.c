#include "test.h"
#include "stdio.h"

int main( void )
{
    for( ;; )
    {
        printf( "%s!!!\n\r", TRAP_STRING );
    }
}

static dbgassert( bool cond )
{
    if( cond )
    {
        while(1){}
    }
}