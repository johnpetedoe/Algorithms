#include <stdarg.h>
#include <assert.h>
#include "./includes/operators.h"
//#include "./includes/tests.h"

typedef enum { true, false }    bool;
typedef char*                   string;


int main (int argc char **argv) {
    valist  ap;
    char    *a;
    char    *b;

    if (argc < 2) {
        return (-1);
    } else if ( argc != 3) {
        f_putstr("Wrong no of args");
        return (-2);
    }
    
    assert( equal_s0_s1( add_s0_s1(a, b), "ab" ) );
    assert( equal_s0_s1( add_s0_s1(a, b), add_s0_s1(a, b)), "abab" );
    
    assert( equal_s0_s1( multiply_s0_i1(a, 2), "aa") );
    assert( equal_s0_s1( multiply_s0_i1(b, 2), "bb") );

    assert( 
        equal_s0_s1( 
            add_s0_s1 (
                multiply_s0_i1(b, 2),
                multiply_s0_i1(a, 2)
            ),
            "aabb"
        )
    );

    /*
    assert(
        equal_b0_b1(
            implies(
                and(
                    equal_s0_s1( multiply_s0_i1(a, 2), "aa"),
                    equal_s0_s1( multiply_s0_i1(b, 2), "bb")
                ),
                equal_s0_s1( 
                    add_s0_s1 (
                        multiply_s0_i1(b, 2),
                        multiply_s0_i1(a, 2)
                    ),
                    "aabb"
                )
            ),
            true  
        )
    );

    assert(
        equal_b0_b1(
            equal_b0_b1(
                implies(
                    and(
                        equal_s0_s1( multiply_s0_i1(a, 2), "aa"),
                        equal_s0_s1( multiply_s0_i1(b, 2), "bb")
                    ),
                    equal_s0_s1( 
                        add_s0_s1 (
                            multiply_s0_i1(b, 2),
                            multiply_s0_i1(a, 2)
                        ),
                        "aabb"
                    )
                ),
                false  
            )
            false
        )
    );
    */

    return (0);
}