#include <stdio.h>
#include <string.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main( )
{

   struct Books Book1;
   struct Books Book2;

   strcpy( Book1.title, "think likea monk");
   strcpy( Book1.author, "Jay Shetty");
   strcpy( Book1.subject, "thinking enlargement");
   Book1.book_id = 6495407;
strcpy( Book2.title, "Atomic Habits");
   strcpy( Book2.author, "James Clear");
   strcpy( Book2.subject, "Atomic Habits ");
   Book2.book_id = 6495700;


   printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf( "Book 1 book_id : %d\n", Book1.book_id);


   printf( "Book 2 title : %s\n", Book2.title);
   printf( "Book 2 author : %s\n", Book2.author);
   printf( "Book 2 subject : %s\n", Book2.subject);
   printf( "Book 2 book_id : %d\n", Book2.book_id);

   return 0;
}