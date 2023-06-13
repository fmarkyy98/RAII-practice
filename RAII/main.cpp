// Create a DB connection "db_conn", (kinda tricky)!
// Put the data from the db to the "data" variable !
// Ensure to unlock the connection in any case, using RAII!
    // - unlock if the function terminates
    // - unlock if you have an exception at the midle of the function.
    // - unlock even if Józsi comes and uses
    //     early return before unlock is properly called
// Create a new h, and a cpp file.

#include <iostream>
#include <assert.h>

#include "DatabaseService.h"

int data;            // Put the required data in this!
/*Type*/ db_conn;    // Put the DatabaseService instance here!

void manage_db() {
    /***** You can start change the file from here *****/

    //TODO 

    /*** You must finish changing the file from here ***/
}

int main() {
    manage_db();  
    assert(data == 42);
    assert(!db_conn->getIsLocked());
    std::cout << "All assertions Passed, nice.";
}