/* rename example */
#include <stdio.h>

int main() {
    int result;
    char oldname[] = "file.txt";
    char newname[] = "newname.txt";
    result = rename(oldname, newname);
    if (result == 0)
        puts ("File successfullt renamed");
    else
        perror("Error renaming file");
    return 0;

    // if ( remove( "myfile.txt" ) != 0 )
    //     perror( "Error deleting file" );
    // else
    //     puts( "File successfully deleted" );
    // return 0;
}