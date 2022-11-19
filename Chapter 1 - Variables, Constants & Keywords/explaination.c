#include <stdio.h>
int main()
{
  printf("hello world");
  return 0;
}

/*

Explaination :-

1. hash is called preprocessor and its work is to combine all the header files along with rest of the program and produce a interediate file with extension -> .i (which is a temporary file)

2. Then compiler converts it into assembly langauge (file extension of which is .s)

3. Then it is converted into machine language and stored in a separate file ( file extension of which is .obj) with the help of assembler

4. Then linker converts the machine language into executable file with the help of libraries (each language has its own set of libraries) whose extension is .exe

5. After which we get a .exe file and that is executed finally

Note : All the conversions of file is done in backend and is not shown/visible to the user

*/