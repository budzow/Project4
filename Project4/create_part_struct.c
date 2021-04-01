#include <stdio.h>
#include <stdlib.h>


///////////////////////////////////////////////////////////////////////////////
// simple struct, Part

typedef struct
{
    int id;
    int serial_nr;
} Part;

///////////////////////////////////////////////////////////////////////////////


// no member is initialized
Part * create_part_bad_1()
{
    Part * part = (Part *)malloc(sizeof(Part));
    return part;
}

// some members are not initialized
Part * create_part_bad_2()
{
    Part * part = (Part *)malloc(sizeof(Part));
    part->id = 1;
    return part;
}


///////////////////////////////////////////////////////////////////////////////

int main(int argc, char ** argv) {
    Part * p = NULL;
    

    p = create_part_bad_1();
    printf("serial_nr=%d\n", p->serial_nr); //c:S836 raised
    p = create_part_bad_2();
    printf("serial_nr=%d\n", p->serial_nr); //c:S836 not raised
    return 0;
}

